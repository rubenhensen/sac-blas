import matplotlib.pyplot as plt
import sys
import numpy as np

ROUTINES = [
    "drotg","drotmg","drot","drotm","dswap","dscal","dcopy",
    "daxpy","ddot","dsdot","dnrm2","dznrm2","dasum","idamax"
]

def cap_n(n:int, incx:int, incy:int):
    return n//incx if incx > incy else n/incy

def flop_count(routine:str, n:int):
    if routine == "drotg":
        return 15 #it will vary a little but it's constant.
    if routine == "drotmg":
        return 100 #placeholder
    if routine == "drot":
        return 3*n + 3*n
    if routine == "drotm":
        return 3*n + 3*n #case sflag = -1
    if routine == "dswap":
        return 0 #only reads/writes
    if routine == "dscal":
        return n
    if routine == "dcopy":
        return 0 #only reads/writes
    if routine == "daxpy":
        return 2*n
    if routine == "ddot":
        return n + n-1
    if routine == "dsdot":
        return 3*n + n-1 #count the casts to double as flops
    if routine == "dnrm2":
        return n + n-1 + 1
    if routine == "dznrm2":
        return 2*n + n-1 + 1
    if routine == "dasum":
        return n + n-1
    if routine == "idamax":
        return 2*n
    return 0
    

def rw_count(routine:str, n:int):
    if routine == "drotg":
        return 0           #this routine most likely happens entirely within L1 cache
    if routine == "drotmg":
        return 0           #this routine most likely happens entirely within L1 cache
    if routine == "drot":
        return (2*n + n)*2 #read 2 values, write result, two times
    if routine == "drotm":
        return (2*n + n)*2 #read 2 values, write result, two times
    if routine == "dswap":
        return (n+n)*2     #read 1 value, write result, two times
    if routine == "dscal":
        return n+n         #read 1 value, write result
    if routine == "dcopy":
        return n+n         #read 1 value, write result
    if routine == "daxpy":
        return 2*n + n     #read 2 values, write result
    if routine == "ddot":
        return 2*n + n + n #read 2 values, write result, then read result for sum
    if routine == "dsdot":
        return 2*n + n + n #read 2 values, write result, then read result for sum
    if routine == "dnrm2":
        return n + n + n   #read 1 value, write result, then read result for sum
    if routine == "dznrm2":
        return 2*n + n + n #read 1 complex value, write result, then read result for sum
    if routine == "dasum":
        return n + n + n   #read 1 value, write result, then read result for sum
    if routine == "idamax":
        return n           #read 1 value to check against
    return 0


def times_to_flops(data, routine:str, incx:int, incy:int):
    res = {}
    for input_size, times in data.items():
        m = cap_n(input_size, incx, incy)
        #time is in ms
        res[input_size] = list(map(lambda time: flop_count(routine, m) / (1000000*time), times))
    return res

def times_to_read_writes(data, routine:str, incx:int, incy:int):
    res = {}
    for input_size, times in data.items():
        m = cap_n(input_size, incx, incy)
        #~~a float takes up 4 bytes in memory~~
        #but now we're using doubles, which take up 8 bytes of memory
        res[input_size] = list(map(lambda time: rw_count(routine, m) / (1000000/8*time), times))
    return res

def times_to_flops_threads(data, routine:str, n:int, incx:int, incy:int):
    res = {}
    for thread_count, times in data.items():
        m = cap_n(n, incx, incy)
        #time is in ms
        res[thread_count] = list(map(lambda time: flop_count(routine, m) / (1000000*time), times))
    return res

def times_to_read_writes_threads(data, routine:str, n:int, incx:int, incy:int):
    res = {}
    for thread_count, times in data.items():
        m = cap_n(n, incx, incy)
        #~~a float takes up 4 bytes in memory~~
        #but now we're using doubles, which take up 8 bytes of memory
        res[thread_count] = list(map(lambda time: rw_count(routine, m) / (1000000/8*time), times))
    return res

def average(data):
    res = {}
    for input_size, y_axis_values in data.items():
        res[input_size] = sum(y_axis_values) / len(y_axis_values)
    return res

def standard_deviation(data):
    res = {}
    for input_size, y_axis_values in data.items():
        res[input_size] = np.std(y_axis_values)
    return res

def analyse_and_plot_input_size(routine:str, output_type:str):
    data_nat    = {}
    data_nat_mt = {}
    data_lib    = {}

    with open(f"data/{routine}.out", "r") as data_file:
        [incx, incy] = data_file.readline().split(",")
        incx = int(incx)
        incy = int(incy)

        for data in data_file:
            data = data.strip()
            if data == "nat_st" or data == "nat_mt" or data == "lib":
                data_source = data
            else:
                [n, *times] = data.split(",")[:-1]
                n = int(n)
                times = list(map(float, times))
                if data_source == "nat_st":
                    data_nat[n] = times
                elif data_source == "nat_mt":
                    data_nat_mt[n] = times
                elif data_source == "lib":
                    data_lib[n] = times

    
    fig, ax = plt.subplots(figsize=(8,6), dpi=100)
    plt.title(routine)
    plt.figtext(.01, .01, f"incx={incx}\nincy={incy}")
    plt.xlabel("input size")
    plt.xscale("log")

    input_sizes_nat    = list(data_nat.keys())
    input_sizes_nat_mt = list(data_nat_mt.keys())
    input_sizes_lib    = list(data_lib.keys())
    
    if output_type == "time":
        times_nat_avg    = list(average(data_nat).values())
        times_nat_mt_avg = list(average(data_nat_mt).values())
        times_lib_avg    = list(average(data_lib).values())
        times_nat_std    = list(standard_deviation(data_nat).values())
        times_nat_mt_std = list(standard_deviation(data_nat_mt).values())
        times_lib_std    = list(standard_deviation(data_lib).values())
        
        plt.errorbar(input_sizes_nat, times_nat_avg, yerr=times_nat_std, label="SaC (1 thread)")
        plt.errorbar(input_sizes_nat_mt, times_nat_mt_avg, yerr=times_nat_mt_std, label="SaC (8 threads)")
        plt.errorbar(input_sizes_lib, times_lib_avg, yerr=times_lib_std, label="AOCL")
        plt.yscale("log")
        plt.ylabel("runtime (ms)")
        plt.legend()
    elif output_type == "bandwidth":
        flops_nat    = times_to_flops(data_nat, routine, incx, incy)
        flops_nat_mt = times_to_flops(data_nat_mt, routine, incx, incy)
        flops_lib    = times_to_flops(data_lib, routine, incx, incy)
        flops_nat_avg    = list(average(flops_nat).values())
        flops_nat_mt_avg = list(average(flops_nat_mt).values())
        flops_lib_avg    = list(average(flops_lib).values())
        flops_nat_std    = list(standard_deviation(flops_nat).values())
        flops_nat_mt_std = list(standard_deviation(flops_nat_mt).values())
        flops_lib_std    = list(standard_deviation(flops_lib).values())

        plt.errorbar(input_sizes_nat, flops_nat_avg, yerr=flops_nat_std, linestyle="None")
        plt.errorbar(input_sizes_nat_mt, flops_nat_mt_avg, yerr=flops_nat_mt_std, linestyle="None")
        plt.errorbar(input_sizes_lib, flops_lib_avg, yerr=flops_lib_std, linestyle="None")
        ax.set_ylabel("performance (Gflop/s)")
        
        ax2 = ax.twinx()
        
        rws_nat    = times_to_read_writes(data_nat, routine, incx, incy)
        rws_nat_mt = times_to_read_writes(data_nat_mt, routine, incx, incy)
        rws_lib    = times_to_read_writes(data_lib, routine, incx, incy)
        rws_nat_avg    = list(average(rws_nat).values())
        rws_nat_mt_avg = list(average(rws_nat_mt).values())
        rws_lib_avg    = list(average(rws_lib).values())
        rws_nat_std    = list(standard_deviation(rws_nat).values())
        rws_nat_mt_std = list(standard_deviation(rws_nat_mt).values())
        rws_lib_std    = list(standard_deviation(rws_lib).values())
        
        ax2.errorbar(input_sizes_nat, rws_nat_avg, yerr=rws_nat_std, label="SaC (1 thread)")
        ax2.errorbar(input_sizes_nat_mt, rws_nat_mt_avg, yerr=rws_nat_mt_std, label="SaC (8 threads)")
        ax2.errorbar(input_sizes_lib, rws_lib_avg, yerr=rws_lib_std, label="AOCL")
        ax2.set_ylabel("memory bandwidth (GB/s)")
        ax2.legend()
    else: raise Exception()

    plt.savefig(f"results/{routine}_input_size.png")

def analyse_and_plot_thread_count(routine:str, output_type:str):
    data = {}

    with open(f"data/{routine}.out", "r") as data_file:
        [n, incx, incy] = data_file.readline().split(",")
        n    = int(n)
        incx = int(incx)
        incy = int(incy)

        for line in data_file:
                [thread_count, *times] = line.split(",")[:-1]
                thread_count = int(thread_count)
                times = list(map(float, times))
                data[thread_count] = times

    fig, ax = plt.subplots(figsize=(8,6), dpi=100)
    plt.title(routine)
    plt.figtext(.01, .01, f"n={n}\nincx={incx}\nincy={incy}")
    plt.xlabel("#threads")

    thread_counts = list(data.keys())
    
    if output_type == "time":
        data_avg = list(average(data).values())
        data_svg = list(standard_deviation(data).values())
        
        plt.errorbar(thread_counts, data_avg, yerr=data_svg, label="SaC")
        plt.yscale("log")
        plt.ylabel("runtime (ms)")
    elif output_type == "bandwidth":
        flops = times_to_flops_threads(data, routine, n, incx, incy)
        flops_avg = list(average(flops).values())
        flops_std = list(standard_deviation(flops).values())

        plt.errorbar(thread_counts, flops_avg, yerr=flops_std, linestyle="None")
        ax.set_ylabel("performance (Gflop/s)")
        
        ax2 = ax.twinx()
        
        rws = times_to_read_writes_threads(data, routine, n, incx, incy)
        rws_avg = list(average(rws).values())
        rws_std = list(standard_deviation(rws).values())
        
        ax2.errorbar(thread_counts, rws_avg, yerr=rws_std, label="SaC")
        ax2.set_ylabel("memory bandwidth (GB/s)")
    else: raise Exception()

    plt.savefig(f"results/{routine}_thread_count.png")


def main():
    if len(sys.argv) < 2:
        print("Supply routine name")
        return
    routine = sys.argv[1]

    if len(sys.argv) < 3:
        input_type = "input_size"
    else:
        input_type = sys.argv[2]
    
    if len(sys.argv) < 4:
        output_type = "bandwidth"
    else:
        output_type = sys.argv[3]
    
    if input_type == "input_size":
        analyse_and_plot_input_size(routine, output_type)
    elif input_type == "thread_count":
        analyse_and_plot_thread_count(routine, output_type)

if __name__ == "__main__":
    main()
