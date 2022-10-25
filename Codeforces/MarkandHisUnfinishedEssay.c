#include<stdio.h>
long long int binarySearchContinous(long long int ar[],long long int num,int size){
	if(size!=1){
		int k=size/2;
		long long int a;
		if(ar[k]==num){return k;}
		else if(ar[k]<num){
			a=binarySearchContinous(ar+k,num,size-k);
			if(a!=-1){
				return k +a;
			}
			else{
				return k;
			}
		}
		else{
			a=binarySearchContinous(ar,num,size-k);
			return a;
		}
	}
	else{
		if(ar[0]<=num){return 0;}
		else{
			return -1;
		}
	}
}
int main(){
	int testcases;
	long long int n,c,q;
	char string[200500];
	long long int l[50],r[50];
	long long int k;
	long long int SIZE[50];
	int index;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld%lld%lld",&n,&c,&q);
		scanf("%s",string);
		SIZE[0]=n;
		for(int i=0;i<c;i++){
			scanf("%lld%lld",&l[i],&r[i]);
			l[i]--;
			SIZE[1+i]=r[i]-l[i]+SIZE[i];
		}
		k=0;
		for(int i=0;i<q;i++){
			scanf("%lld",&k);
			k--;
			index=binarySearchContinous(SIZE, k, c+1);
			//printf("%d    ",index);
			while(k>n-1){
				//n=SIZE[index]
				if(k>=SIZE[index]){
					k=k-SIZE[index]+l[index];
				}
				index--;
			}
			printf("%c\n",string[k]);
			//printf("%c  %d\n",string[k-1],k-1);
		}
	}
	return 0;
}
