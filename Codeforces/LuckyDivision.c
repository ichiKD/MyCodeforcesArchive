#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int luckynum[14];
	luckynum[0]=4;
	luckynum[1]=7;
	luckynum[2]=44;
	luckynum[3]=47;
	luckynum[4]=74;
	luckynum[5]=77;
	luckynum[6]=444;
	luckynum[7]=447;
	luckynum[8]=474;
	luckynum[9]=477;
	luckynum[10]=744;
	luckynum[11]=747;
	luckynum[12]=774;
	luckynum[13]=777;
	int count=0;
	for(int i=0;i<14;i++){
		if(n%luckynum[i]==0){
			count=1;
			break;
		}
	}
	if(count){printf("YES");}
	else{printf("NO");}
	return 0;
}