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
    int testcases;
    int n;
    int sum,temp1,temp2;
    int a[100];
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(n==1){
			printf("0\n");
		}
		else{
			mergeSort(a, 0, n - 1);
			temp1=1;
			temp2=1;
			sum=0;
			for(int i=0;i<n;i++){
				for(int j=n-1;i<j;j--){
					sum=a[i]+a[j];
					temp2=1;
					for(int k=i+1,l=j-1;k<l;){
						if(sum==a[k]+a[l]){
							temp2++;
							k++;
							l--;
						}
						else if(sum<a[k]+a[l]){
							l--;
						}
						else{
							k++;
						}
					}
					if(temp2>temp1){
						temp1=temp2;
					}
				}
			}
			printf("%d\n",temp1);
		}
	}
    return 0;
}