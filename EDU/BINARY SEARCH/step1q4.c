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
	int n, k;
	int arr[100500];
	int temp1,temp2;
	int low ,high, mid;
	int ans;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr, 0, n - 1);
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d%d",&temp1,&temp2);
		low=-1,high=n;
		while(low+1<high){
			mid=(low+high)/2;
			if(arr[mid]<temp1){
				low=mid;
			}
			else if(arr[mid]>=temp1){
				high=mid;
			}
		}
		ans=high;
		low=-1, high=n;
		while(low+1<high){
			mid=(low+high)/2;
			if(arr[mid]<=temp2){
				low=mid;
			}
			else if(arr[mid]>temp2){
				high=mid;
			}
		}
		printf("%d ",low+1-ans);
	}
	return 0;
}