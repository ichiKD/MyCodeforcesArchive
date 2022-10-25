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
	int n,m;
	int d;
	int sum;
	int damage;
	int a[100500];
	int b[100500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		if(m==1){
			printf("%d\n",2);
		}
		else{
			mergeSort(a,0,m-1);
			for(int i=0;i<m-1;i++){
				b[i]=a[i+1]-a[i]-1;
			}
			b[m-1]=a[0]-1+n-a[m-1];
			mergeSort(b,0,m-1);
			sum=0;
			d=0;
			for(int i=1;i<=m;i++){
				//printf("%d and%d ",b[m-i]-d,sum);
				if(b[m-i]-d>2){
					sum+=b[m-i]-d-1;
					d+=4;
				}
				else if(b[m-i]-d==2||b[m-i]-d==1){
					sum+=1;
					break;
				}
				else{
					break;
				}
			}
			printf("%d\n",n-sum);
		}
	}
	return 0;
}