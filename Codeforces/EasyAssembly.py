# doesn't work due to having wrong logic
# see C++ solution for correct logic 

def ri(): return int(input())
def rs(): return input()
def rl(): return list(map(int, input().split()))
def rls(): return list(input().split())
 
#threading.stack_size(10**6)
#sys.setrecursionlimit(10**6)
# threading.Thread(target=main).start()

n=ri()
k=[]                            #list
block=[]                        #listoflist
split_block=[]                  #listoflist

for i in range(0, n):
    temp=rl()
    k.append(temp[0])
    temp_remove=temp[0]
    temp.remove(temp_remove)
    block.append(temp)
split=0
combine=0
for i in range(0, n):
    if(k[i]==1):
        split_block.append([block[i][0], block[i][0]])
    else:
        secondlastelement=block[i][0]
        for j in range(1, k[i]):
            if (block[i][j]<block[i][j-1]) :
                split_block.append([secondlastelement, block[i][j-1]])
                secondlastelement=block[i][j]
                split+=1
        split_block.append([secondlastelement, block[i][k[i]-1]])
split_block.sort()
size=len(split_block)
for i in range(1, size):
    if (split_block[i][0]>=split_block[i-1][1]):
        combine+=1
    else:
        if (split_block[i][1]<=split_block[i-1][1]):
            split+=1
            combine+=2
        else :
            split+=2
            combine+=3
        split_block[1][0]=split_block[i-1][1]
print(split, combine)