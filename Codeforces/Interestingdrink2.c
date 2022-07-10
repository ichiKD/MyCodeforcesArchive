#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int temp;
	int shop[100500]={0};
	int cmf[100500]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		shop[temp]+=1;
	}
	for(int i=1;i<100400;i++){
		cmf[i]=cmf[i-1]+shop[i];
	}
	int q;
	scanf("%d",&q);
	int m, ans[100500];
	for(int i=0;i<q;i++){
		scanf("%d",&m);
		ans[i]=cmf[m];
	}
	for(int i=0;i<q;i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}
/*
#include<stdio.h>
int binarySearch(int ar[],int num,int size){
	if(size!=1){
		int k=size/2;
		int a;
		if(ar[k]==num){return k;}
		else if(ar[k]<num){
			a=binarySearch(ar+k,num,size-k);
			if(a!=-1){
				return k +a;
			}
			else{
				return k;
			}
		}
		else{
			a=binarySearch(ar,num,size-k);
			return a;
		}
	}
	else{
		if(ar[0]<=num){return 0;}
		else{
			return -1;
		}
	}
}
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
	scanf("%d",&n);
	int shop[100500];
	for(int i=0;i<n;i++){
		scanf("%d",&shop[i]);
	}
	int q;
	scanf("%d",&q);
	int m[100500], ans[100500];
	mergeSort(shop, 0, n-1);
	for(int i=0;i<q;i++){
		scanf("%d",&m[i]);
	}
	for(int i=0;i<q;i++){
		if(m[i]<shop[0]){ans[i]=-1;}
		else{
			ans[i]=binarySearch(shop, m[i], n);
			for(int j=0;j<n;j++){
				if(shop[ans[i]]==shop[ans[i]+1]){
					ans[i]=ans[i]+1;
				}
				else{
					break;
				}
			}
			
		}
	}
	for(int i=0;i<q;i++){
		printf("%d\n",ans[i]+1);
	}
	return 0;
}
*/