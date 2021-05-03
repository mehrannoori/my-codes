import requests

url = 'https://api.coinbase.com/v2/prices/spot?currency=USD'
response = requests.get(url)
data = response.json()['data']['amount']
#my_money = float(data) * 0.01
print('\tPrice: '+str(data)+' $$')
#print('\tMy money: '+str(my_money)+' $$')
x = input()
del x