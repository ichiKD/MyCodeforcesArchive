#include <stdio.h>
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
	int testcases;
	int n,x;
	int a[400];
	int check;
	scanf("%d",&testcases);
	while(testcases--){
		check=1;
		scanf("%d%d",&n,&x);
		for(int i=0;i<2*n;i++) scanf("%d",&a[i]);
		mergeSort(a, 0, 2*n - 1);
		for(int i=0;i<n;i++){
			if(a[i]+x>a[i+n]){
				check=0;
				break;
			}
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}