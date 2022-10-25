
// This is O(nlogn) solution
// I can solve this in O(n) by not using mergesort and just find min-max in O(n)

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
	int b[200500];
	long long int count1,count2;
	long long int combination;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	mergeSort(b,0,n-1);
	count1=count2=0;
	for(int i=0;i<n;i++){
		if(b[i]==b[0]){
			count1++;
		}
		else{
			break;
		}
	}
	for(int i=n-1;0<=i;i--){
		if(b[i]==b[n-1]){
			count2++;
		}
		else{
			break;
		}
	}
	if(count1==n){
		combination=(count1)*(count1-1)/2;
	}
	else{
		combination=count1*count2;
	}
	printf("%d %lld\n",b[n-1]-b[0],combination);
	return 0;
}

