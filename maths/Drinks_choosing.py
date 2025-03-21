n, k = map(int, input().split()) 
preference={}
for i in range(n):
    drink=int(input())
    preference[drink] = preference.get(drink, 0) + 1
# for key,values in preference.items():
#     if values%2!=0: count+=1
count = sum(1 for value in preference.values() if value % 2 != 0)
print(n-(count//2))