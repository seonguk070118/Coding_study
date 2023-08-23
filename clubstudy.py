import dload
import urllib.request
import requests
from urllib.request import urlopen
from bs4 import BeautifulSoup

response=urlopen("https://news.naver.com/main/ranking/popularMemo.naver")
soup=BeautifulSoup(response, "html.parser")

img1=soup.find("a",{"class": "list_img nclicks('RBP.cmtnws')"})
img=img1.find("img")
img2=img.get("src")
print(img2)
dload.save(img2)

title=soup.find("a",{"class": "list_title nclicks('RBP.cmtnws')"})
title2=title.text.strip()
print(title2[0:])

rank=soup.find("em",{"class":"list_ranking_num"})
rank2=rank.text.strip()
print(rank2)

url = "https://news.naver.com/main/ranking/popularMemo.naver"
req = urllib.request.Request(url)
sourcecode = urllib.request.urlopen(url).read()
soup = BeautifulSoup(sourcecode, "html.parser")

href=soup.find("div", class_="list_content")
print(href.find("a")["href"])

