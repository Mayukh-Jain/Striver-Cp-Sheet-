t=int(input())
x = list(map(int, input().split()))
for n in x:
    if n<=14:
        print("NO")
        continue
    d=(n-1)//14
    if n<=((14*d)+6): print("YES")
    else: print("NO")