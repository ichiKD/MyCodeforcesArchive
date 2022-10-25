#include<stdio.h>
int main(){
	int n;
	int a[20], count[10]={0};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%1d",&a[i]);
		++count[a[i]];
	}
	count[2]+=count[9]+3*count[8]+2*count[4];
	count[7]+=count[9]+count[8];
	//	count[8]=0;
	count[3]+=2*count[9]+count[6]+count[4];
	//	count[9]=0;
	count[5]+=count[6];
	count[6]=count[4]=0;
	//	don't need to set below count[x]s zero as for loop will skip them
	//	count[0]=count[1]=0
	//	count[9]=count[8]=0
	for(int i=7;1<i;i--){
		if(count[i]!=0){
			while(count[i]--){
				printf("%d",i);
			}
		}
	}
	printf("\n");
	return 0;
}