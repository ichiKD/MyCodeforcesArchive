#include<stdio.h>
void merge(int arr[], int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	i = 0;
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r){
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}
int main(){
	int n;
	int a[105];
	int pnums=0,nnums=0,numberofzeros=0;
	int n1,n2,n3;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	mergeSort(a, 0, n - 1);
	for(int i=0;i<n;i++){
		if(a[i]>0) pnums++;
		else if(a[i]==0) numberofzeros++;
		else nnums++;
	}
	if(nnums%2==0){
		if(pnums==0){
			printf("%d ",nnums-3);
			for(int i=3;i<nnums;i++) printf("%d ",a[i]);
			printf("\n2 %d %d \n",a[0],a[1]);
			printf("%d %d ",numberofzeros+1,a[2]);
			for(int i=0;i<numberofzeros;i++) printf("0 ");
		}
		else{
			printf("%d ",nnums-1);
			for(int i=1;i<nnums;i++) printf("%d ",a[i]);
			printf("\n%d ",pnums);
			for(int i=nnums+numberofzeros;i<n;i++) printf("%d ",a[i]);
			printf("\n%d %d ",numberofzeros+1,a[0]);
			for(int i=0;i<numberofzeros;i++) printf("0 ");
		}
	}
	else{
		if(pnums==0){
			printf("%d ",nnums-2);
			for(int i=2;i<nnums;i++) printf("%d ",a[i]);
			printf("\n2 %d %d \n",a[0],a[1]);
			printf("%d ",numberofzeros);
			for(int i=0;i<numberofzeros;i++) printf("0 ");
		}
		else{
			printf("%d ",nnums);
			for(int i=0;i<nnums;i++) printf("%d ",a[i]);
			printf("\n%d ",pnums);
			for(int i=nnums+numberofzeros;i<n;i++) printf("%d ",a[i]);
			printf("\n%d ",numberofzeros);
			for(int i=0;i<numberofzeros;i++) printf("0 ");
		}
	}
	return 0;
}