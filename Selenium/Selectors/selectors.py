from selenium import webdriver
from selenium.webdriver.common.by import By

driver = webdriver.Firefox()

driver.get("http://nitrowriters.com/form/form.html")

txt = driver.find_element(By.ID, "my_text_field")
txt.send_keys("hola")

descriptions = driver.find_elements(By.CLASS_NAME, "description")

for desc in descriptions:
    print(desc)

text_area = driver.find_element(By.TAG_NAME, "textarea")
text_area.send_keys("wololo")

link = driver.find_element(By.LINK_TEXT, "Go to SitePoint")
print(link.text)

inputs = driver.find_elements(By.TAG_NAME, "input")
for inpt in inputs:
    if inpt.get_attribute("type") == "text":
        inpt.clear()
        inpt.send_keys("Keeys")

# Universal
elements = driver.find_elements(By.CSS_SELECTOR, "*")
for element in elements:
    print(element.text)

# Grouping type
elements = driver.find_elements(By.CSS_SELECTOR, "h1, h2, h3, h4, h5, h6")
for element in elements:
    print(element.text)

# Descendant
elements = driver.find_elements(By.CSS_SELECTOR, "form input")
for element in elements:
    print(element.text)

# Child
elements = driver.find_elements(By.CSS_SELECTOR, "form > input")
for element in elements:
    print(element.text)

# Adjacent sibling
elements = driver.find_elements(By.CSS_SELECTOR, "input + input")
for element in elements:
    print(element.text)

# General sibling
elements = driver.find_elements(By.CSS_SELECTOR, "p ~ p")
for element in elements:
    print(element.text)

# Class
elements = driver.find_elements(By.CSS_SELECTOR, ".form_description")
for element in elements:
    print(element.text)

# Id
elements = driver.find_elements(By.CSS_SELECTOR, "#my_description")
for element in elements:
    print(element.text)

# Pseudo element
elements = driver.find_elements(By.CSS_SELECTOR, "p::first-line")
for element in elements:
    print(element.text)

# Pseudo class
elements = driver.find_elements(By.CSS_SELECTOR, "a:link")
for element in elements:
    print(element.text)
