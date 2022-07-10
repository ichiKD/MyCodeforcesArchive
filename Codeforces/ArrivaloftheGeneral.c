#include<stdio.h>
int main(){
	int n;
	int arr[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int min=arr[0],max=arr[0];
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(min>=arr[i]){
			min=arr[i];
			j=i;
		}
		if(max<arr[i]){
			max=arr[i];
			k=i;
		}
	}
	if(k<j){printf("%d",k+n-1-j);}
	else{printf("%d",k+n-2-j);}
	return 0;
}