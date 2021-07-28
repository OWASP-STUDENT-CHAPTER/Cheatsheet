import selenium from webdriver
obj = webdriver.Chrome(executable_path='location in pc for driver')
obj.get("url in quotes")
obj.back() # moves back to parent page
obj.forward() # maves forward to children page
obj.refresh() # refreshses the site
obj.close() obj.close() #closes the website
#########################################################################
#book site scaper
obj.find_element_by_link_text("Children") # returns a selenium object
s = obj.find_element_by_link_text("Children")  (here link text is case sensetive)
s.click() # click on the link after finding it
s = obj.find_element_by_partial_link_text("Historical")
lst = obj.find_elements_by_link_text("istorical") #returns a list of objects
for i in lst
	i.click()
obj.find_element_by_class_name("product_pod") # finds from class of html element
d = obj.find_element_by_xpath("/html/head/title")
d.get_attribute("innerHTML") # for text inside a html tag, if we want both text and tag, use outerHTML
d = obj.find_element_by_xpath("///title") # looks for first title tag
############################################################################
# Insta scraper
username = obj.find_element_by_name("username")
username.send_keys("workshop_one") # puts text in that field
username.clear() # it will clear the input field
loginButton = obj.find_element_by_xpath("//button[conatins(@class,'class in html tag')]") # we added single quotes in between other wise it woul treat it as diffrent string due tot he outer double string quotes
loginButton.click()
# selenium needs time to extract elements from site, either avoid executing many function at once, or add time between commands from time library
