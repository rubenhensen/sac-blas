from selenium import webdriver
from selenium.webdriver.common.by import By

from selenium.webdriver.chrome.options import Options
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

options = Options()
options.add_experimental_option("detach", True)

driver = webdriver.Chrome(options=options)

driver.get("https://www.4daagse.nl/meedoen/ticket-overdragen")
wait = WebDriverWait(driver, 30);
element = wait.until(EC.element_to_be_clickable((By.XPATH, "//button[@title='Accepteren']")))
element.click()
element = wait.until(EC.element_to_be_clickable((By.LINK_TEXT, "Zoek beschikbare tickets")))
element.click()

driver.switch_to.frame("atleta-embed")
while True:
    if (len(driver.find_elements(By.XPATH, "//a[normalize-space()='Ticket kopen']")) != 0):
        element = driver.find_element(By.XPATH, "//a[normalize-space()='Ticket kopen']")
        element.click()
    if (len(driver.find_elements(By.XPATH, "//button[normalize-space()='Ticket kopen']")) != 0):
        element = driver.find_element(By.XPATH, "//button[normalize-space()='Ticket kopen']")
        element.click()
    if (len(driver.find_elements(By.XPATH, "//span[normalize-space()='Ticket kopen']")) != 0):
        element = driver.find_element(By.XPATH, "//span[normalize-space()='Ticket kopen']")
        element.click()
    if (len(driver.find_elements(By.XPATH, "//span[text()='Vernieuwen']")) != 0):
        element = driver.find_element(By.XPATH, "//span[text()='Vernieuwen']")
        element.click()

