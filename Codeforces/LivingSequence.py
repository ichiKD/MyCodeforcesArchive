# Wrong code see C++ file of same name for correct soluction
def position(n):
    ans=n
    while(n!=0):
        if(n//10**(len(str(n))-1)<4):
            ans=ans-(n//10**(len(str(n))-1))*T[len(str(n))-1]
            n=n%10**(len(str(n))-1)
        else:
            ans=ans-(n//10**(len(str(n))-1)-1)*T[len(str(n))-1]-10**(len(str(n))-1)
            n=n%10**(len(str(n))-1)
    print(ans)
    return ans

def solve():
    k=int(input())
    high=k*10
    low=k
    while(low+1<high):
        mid=(low+high)//2
        if(position(mid)<=k):
            low=mid
        else:
            high=mid
    print(low, position(mid), k)
    print(2932285320890, position(2932285320890), k)
    return

T=[0]
for i in range(0, 15):
    T.append(T[i]*9+10**i)

testcases=int(input())
for i in range(0, testcases):
    solve()