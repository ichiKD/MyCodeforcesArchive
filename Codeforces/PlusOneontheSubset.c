#include<stdio.h>
/*
int minmax_finder(int a[],int b[], int elements){
	int min=a[0], max=a[0];
	for(int i=0; i<elements;i++){
		if(min>a[i]){min=a[i];}
		if(max<a[i]){max=a[i];}
	}
	b[0]=min;
	b[1]=max;
}
*/
int minmax_finder(int *a,int *b, int elements){
	int min=a[0], max=a[0];
	for(int i=0; i<elements;i++){
		if(min>a[i]){min=a[i];}
		if(max<a[i]){max=a[i];}
	}
	b[0]=min;
	b[1]=max;
}
int main(){
	int testcases;
	scanf("%d",&testcases);
	int indices[testcases];
	int arr[testcases][50];
	int minmax[testcases][2];
	for(int i=0; i<testcases; i++){
		scanf("%d",&indices[i]);
		for(int j=0; j<indices[i]; j++){
			scanf("%d",&arr[i][j]);
		}
		minmax_finder(arr[i], minmax[i], indices[i]);
		
	}
	for(int i=0; i<testcases; i++){
		printf("%d\n",minmax[i][1]-minmax[i][0]);
	}
	return 0;
}