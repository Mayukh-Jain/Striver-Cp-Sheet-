x,y,z=map(int, input().split())
m=(x+y)//z
exchange=0
if (((x%z)+(y%z))/z)>=1:
    exchange=z-max(x%z,y%z)
print(m,exchange)