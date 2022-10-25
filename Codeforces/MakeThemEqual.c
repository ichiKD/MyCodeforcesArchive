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
    int count=1;
    int a[120];
    int x,y,z;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    for(int i=1;i<n;i++) {
        if(a[i]!=a[i-1]) count++;
    }
    if(count>3) {
        printf("-1");
    } 
    else if(count==1){
        printf("0");
    } 
    else if(count==2){
        if((a[n-1]+a[0])%2){    
            printf("%d",a[n-1]-a[0]);
        } 
        else{
            printf("%d",(a[n-1]-a[0])/2);
        }
    }
    else{
        for(int i=1;i<n;i++){
            if(a[0]!=a[i]){
                if(a[0]+a[n-1]==2*a[i]){
                    printf("%d",a[i]-a[0]);
                }
                else{
                    printf("-1");
                }
                break;
            }
        }
    }
	return 0;
}