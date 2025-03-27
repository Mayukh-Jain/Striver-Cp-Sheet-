n=int(input())
for i in range(n):
    y=input()
    divbyten=False
    divbythree=0
    divbytwo=False
    nzero=0
    for j in y:
        if j=='0': 
            divbyten=True
            nzero+=1
        if ((j!='0' and int(j)%2==0) or nzero==2): divbytwo=True
        divbythree+=int(j)
    if (divbythree%3==0 and divbyten and divbytwo): print("red")
    else: print("cyan")
