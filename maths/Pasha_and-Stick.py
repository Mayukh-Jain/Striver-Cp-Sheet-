total=int(input())
if (total<6 or total%2!=0):
    print(0)
else: print(((total//2)-1)//2)