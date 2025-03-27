testcase=int(input())
for i in range(testcase):
    x,y=map(int,input().split())
    a=x.bit_length() - 1
    # if x%(2**a)==0: a+=1
    print(a)
    if (y>x and (y<=(((3**a))))):
        print("YES")
    elif y>x:
        print("NO")
    else: print("YES")