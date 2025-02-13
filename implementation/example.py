n=int(input())
a=n
sw=1
for i in range(0,a-1):
    if n==2 :
        print("2   2")
        break
    if n==3:
        print("1  3")
        break

    if i==0:
        print(n-2," ",n)
        n-=1
    if sw==1:
        print(n, ' ',n)
        sw=0
    if sw==0:
        print(n-3," ",n)
        n-=2
        sw=1
    if n==2 :
        print("2   2")
        break
    if n==3:
        print("1   3")
        break
