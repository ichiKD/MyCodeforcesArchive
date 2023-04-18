n= int(input())
st= input()
count= 0
for i in range(1, n):
    if st[i]==st[i-1]:
        count+=1
print(count)