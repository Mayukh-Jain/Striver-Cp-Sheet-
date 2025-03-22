import sys
sys.set_int_max_str_digits(10**8) 

t=int(input())
for _ in range(t):
    c,sec=map(int,input().split())
    a=sec//c
    b=sec%c
    print((a**2)*(c-b)+((a+1)**2)*b)