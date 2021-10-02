#!/bin/python3
import requests
import string

url_list = []
FILE_NAME_INDEX = 0
url = input('url: ')
url = url[:-1]
N = int(input('N: '))

for i in range(1, N+1):
    url_list.append(url + str(i))

for url in url_list:
    FILE_NAME_INDEX += 1
    r = requests.get(url, allow_redirects=True)
    with open(str(FILE_NAME_INDEX)+'.svg', 'wb') as SVG_OBJECT:
        SVG_OBJECT.write(r.content)