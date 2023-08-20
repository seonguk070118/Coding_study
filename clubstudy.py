from urllib.request import urlopen
from bs4 import BeautifulSoup

response=urlopen("https://news.naver.com/main/ranking/popularMemo.naver")
soup=BeautifulSoup(response, "html.parser")

value=soup.find("a",{"class": "list_title nclicks('RBP.cmtnws')"})
print(value)

value2=value.text.strip()
print(value2[0:])

