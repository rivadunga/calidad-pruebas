from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support.ui import Select
import time

driver = webdriver.Firefox()

#Login (Admin)
driver.get("http://localhost/admin")
driver.find_element(By.XPATH,"//*[@id=\"input-username\"]").send_keys("user")
driver.find_element(By.XPATH,"//*[@id=\"input-password\"]").send_keys("pass")
driver.find_element(By.XPATH,"//*[@id=\"content\"]/div/div/div/div/div[2]/form/div[3]/button/i").click()

#Register products
time.sleep(3)
driver.find_element(By.XPATH,"//*[@id=\"menu-catalog\"]/a").click()
driver.find_element(By.XPATH,"//*[@id=\"collapse1\"]/li[2]/a").click()
driver.find_element(By.XPATH,"//*[@id=\"collapse1-1\"]/li[1]/a").click()

#Set products
time.sleep(3)
driver.find_element(By.XPATH,"//*[@id=\"content\"]/div[1]/div/div/a").click()
driver.find_element(By.XPATH,"//*[@id=\"input-name1\"]").send_keys("ProductA")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-title1\"]").send_keys("ProdA")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-description1\"]").send_keys("This is the tag description for product A")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-keyword1\"]").send_keys("ProdA")
driver.find_element(By.XPATH,"//*[@id=\"input-tag1\"]").send_keys("ProdA")
driver.find_element(By.XPATH,"//*[@id=\"form-product\"]/ul/li[2]/a").click()
driver.find_element(By.XPATH,"//*[@id=\"input-model\"]").send_keys("ProdA")
driver.find_element(By.XPATH,"//*[@id=\"content\"]/div[1]/div/div/button").click()


#Product A
time.sleep(3)
driver.find_element(By.XPATH,"//*[@id=\"content\"]/div[1]/div/div/a").click()
driver.find_element(By.XPATH,"//*[@id=\"input-name1\"]").send_keys("ProductB")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-title1\"]").send_keys("ProdB")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-description1\"]").send_keys("This is the tag description for product B")
driver.find_element(By.XPATH,"//*[@id=\"input-meta-keyword1\"]").send_keys("ProdB")
driver.find_element(By.XPATH,"//*[@id=\"input-tag1\"]").send_keys("ProdB")
driver.find_element(By.XPATH,"//*[@id=\"form-product\"]/ul/li[2]/a").click()
driver.find_element(By.XPATH,"//*[@id=\"input-model\"]").send_keys("ProdB")
driver.find_element(By.XPATH,"//*[@id=\"content\"]/div[1]/div/div/button").click()
