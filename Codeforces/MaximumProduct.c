#include<stdio.h>

void merge(long long int arr[],long long int l,long long int m,long long int r){
	long long int i, j, k;
	long long int n1 = m - l + 1;
	long long int n2 = r - m;
	long long int L[n1], R[n2];
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
void mergeSort(long long int arr[], long long int l,long long int r){
	if (l < r) {
		long long int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main(){
    int testcases;
	long long int n, max, temp, pn;
	long long int a[100500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		mergeSort(a, 0, n - 1);
		pn=0;
		for(int i=0;i<n;i++){
			if(a[i]>0){
				pn=n-i;
				break;
			}
		}
		if(pn==0){
			max=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
		}
		else if(pn==1||pn==2){
			max=a[n-1]*a[3]*a[2]*a[1]*a[0];
		}
		else if(pn==3||pn==4){
			max=a[n-1]*a[3]*a[2]*a[1]*a[0];
			temp=a[n-1]*a[n-2]*a[n-3]*a[1]*a[0];
			if(max<temp){
				max=temp;
			}
		}
		else{
			max=a[n-1]*a[3]*a[2]*a[1]*a[0];
			temp=a[n-1]*a[n-2]*a[n-3]*a[1]*a[0];
			if(max<temp){
				max=temp;
			}
			temp=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
			if(max<temp){
				max=temp;
			}
		}
		printf("%lld\n",max);
	}
    return 0;
}