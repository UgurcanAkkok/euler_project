#!/usr/bin/python
import requests 
import bs4

base_url = "https://projecteuler.net/problem="

page = 1
while True:
    problem_url = base_url + str(page)
    problem_title = ""
    try:
        req = requests.get(problem_url)
    except requests.exceptions.ConnectionError:
        print("There is a ConnectionError")
        break
    else:
        source = req.content
        soup = bs4.BeautifulSoup(source,features="html5lib")
        problem_title = soup.h2.string
    with open("problems","a") as problemF:
        problemF.write("{0} {1}\n".format(page,problem_title))
        for p_text in soup.find_all("p"):
            problemF.write("{}\n".format(p_text.string))
        problemF.write("\n\n")
        print("{0}. problem has been written".format(page))
    page +=1 
    
