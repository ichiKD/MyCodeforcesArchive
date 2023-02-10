#include<stdio.h>
int maximum(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
	int N, k;
	int min, max;
	int arr[1000];
	int min1[1000], min2[1000];
	scanf("%d%d", &N, &k);
	for(int i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	if(k==1){
		min=a[0];
		for(int i=1;i<N;i++){
			if(min>a[i]){
				min=a[i];
			}
		}
		printf("%d", min);
	}
	else if(k==2){
		min1[0]=arr[0];
		for(int i=1;i<N;i++){
			if(min1[i-1]>a[i])
				min1[i]=a[i];
			else
				min1[i]=min1[i-1];
		}
		min2[N-1]=arr[N-1];
		for(int i=n-2;0<=i;i--){
			if(min2[i+1]>a[i])
				min2[i]=a[i];
			else
				min2[i]=min1[i+1];
		}
		max=a[0];
		for(int i=1;i<N;i++){
			max=maximum(max, maximum(min1[i-1], min2[i]));
		}
		printf("%d", max);
	}
	else{
		max=a[0];
		for(int i=1;i<N;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		printf("%d", max);
	}
	return 0;
}