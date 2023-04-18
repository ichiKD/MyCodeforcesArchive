def check(n, x, p):
    b=[0]*n
    l=x
    for i in range(1, min(p, 2*n)+1):
        b[(l+i)%n]=1
        l+=i
    if(b[0]):
        print("YES")
    else:
        print("NO")

testcases=int(input())
for i in range(0, testcases):
    a=list(map(int, input().split()))
    check(a[0], a[1], a[2])
#    n=a[0]
#    x=a[1]
#    p=a[2]