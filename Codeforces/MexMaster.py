testcases=int(input())
for x in range(0, testcases):
    n=int(input())
    a=list(map(int, input().split()))
    zero=a.count(0)
    one=a.count(1)
    maximum=max(a)
    if(2*zero<=n+1):
        ans=0
    elif(maximum>=2 or one==0):
        ans=1
    else:
        ans=2
    print(ans) 