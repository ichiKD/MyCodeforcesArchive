#include<stdio.h>
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int testcases;
	int n,x;
	int a[100500];
	int sum;
	int check;
	int length;
	int fluff1,fluff2;
	// int shift1,shift2;
	int index1,index2;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&x);
		sum=0;
		check=0;
		//sum of number of zeros at the start of array and at the end of array
		fluff1=0; 
		fluff2=0; 
		index1=0;
		index2=n-1;
		// shift1=0;
		// shift2=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]%x!=0){
				check=1;
				break;
			}
		}
		if(check==0){
			printf("-1\n");
			continue;
		}
		for(int i=0;i<n;i++){
			if(a[i]==0) fluff1++;
			else break;
		}
		for(int i=n-1;0<=i;i--){
			if(a[i]==0) fluff2++;
			else break;
		}
		if(sum%x!=0){
			printf("%d\n",n);
			continue;
		}
		for(int i=0;i<n;i++){
			if(a[i]%x!=0){
				index1=i;
				break;
			}
		}
		for(int j=n-1;0<=j;j--){
			if(a[j]%x!=0){
				index2=j;
				break;
			}
		}
		// printf("%d %d  \n",index1,index2);
		// printf("%d %d\n",n-1-index1,index2);
		length=max(n-1-index1,index2);
		printf("%d\n",length);
	}
	return 0;
}