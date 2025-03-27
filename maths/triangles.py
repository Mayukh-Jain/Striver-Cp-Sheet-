testcases=int(input())
for i in range(testcases):
    w,h=map(int,input().split())
    x1=list(map(int,input().split()))
    x2=list(map(int,input().split()))
    y1=list(map(int,input().split()))
    y2=list(map(int,input().split()))
    print(max(max(x1[-1]-x1[1],x2[-1]-x2[1])*h,max(y1[-1]-y1[1],y2[-1]-y2[1])*w)),