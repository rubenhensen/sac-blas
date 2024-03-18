from selenium import webdriver
from selenium.webdriver.common.by import By

from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

options = Options()
options.add_experimental_option("detach", True)

driver = webdriver.Chrome(options=options)

driver.get("https://atleta.cc/b/Tnsp/events/TnspI6NaAkXM/resale")
# driver.implicitly_wait(10) 
wait = WebDriverWait(driver, 30);
# wait.until(EC.visibility_of_element_located((By.XPATH,'//button[text()="Accepteren"]')));
# element = wait.until(EC.element_to_be_clickable((By.XPATH, "//button[@title='Accepteren']")))
# element.click()
# element = wait.until(EC.element_to_be_clickable((By.LINK_TEXT, "Zoek beschikbare tickets")))
# element.click()

driver.switch_to.frame("atleta-embed")
element = wait.until(EC.element_to_be_clickable((By.LINK_TEXT, "Zoek beschikbare tickets")))
element.click()
while True:
    if (len(driver.find_elements(By.XPATH, "//a[normalize-space()='Ticket kopen']")) != 0):
        element = driver.find_element(By.XPATH, "//a[normalize-space()='Ticket kopen']")
        element.click()
    element = wait.until(EC.element_to_be_clickable((By.XPATH, "//span[text()='Vernieuwen']")))
    element.click()


# cookies = driver.find_element(By.XPATH,'//button[text()=" Accepteren "]')
# cookies.click()
# link1 = driver.find_element(By.LINK_TEXT, "Zoek beschikbare tickets")
# link1.click()
# link1 = driver.find_element(By.LINK_TEXT, "Zoek beschikbare tickets")
# link1.click()

# driver.quit()
# By by = By.xpath("//span[.='Settings']")