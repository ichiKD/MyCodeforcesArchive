#include<stdio.h>
int binarySearch(int ar[],int num,int size){
	int k=size/2;
	if(ar[k]>=num&&num>ar[k-1]){return k;}
	else if(ar[k]<num){
		return k +binarySearch(ar+k,num,size-k);
	}
	else {
		return binarySearch(ar,num,size-k);
	}
}
int main(){
	int piles;
	scanf("%d",&piles);
	int worms[200000],cdf[200000];
	scanf("%d",&worms[0]);
	cdf[0]=worms[0];
	for(int i=1;i<piles;i++){
		scanf("%d",&worms[i]);
		cdf[i]=cdf[i-1]+worms[i];
	}
	int m,j;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&j);
		printf("%d\n",1+binarySearch(cdf, j, piles));
	}
	return 0;
}