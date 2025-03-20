n,m,k=map(int,input().split())
ai=list(map(int,input().split()))
ai.sort(reverse=True)
max1 = ai[0]
max2 = ai[1]
happiness=((m%(k+1)) + (m//(k+1))*k)*max1

happiness+=(m//(k+1))*max2
print(int(happiness))
