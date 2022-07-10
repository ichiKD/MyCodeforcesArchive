#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int arr[200500];
	int n,x1,x2,i1;
	int check=1,a=1,b=1;
	for(int i=0;i<testcases;i++){
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%d",&arr[j]);
		}
		check=1;
		a=1;
		b=1;
		for(int j=0,k=0;j<(n-k-1);){
			if(arr[j]==arr[n-k-1]){
				j++;
				k++;
			}
			else{
				x1=arr[j];
				x2=arr[n-j-1];
				i1=j;
				check=0;
				break;
			}
		}
		if(check==0){
			//case 1 x1
			for(int j=i1+1,k=i1;j<(n-k-1);){
				if(arr[j]==arr[n-k-1]){
					j++;
					k++;
				}
				else if(x1==arr[j]){
					j++;
				}
				else if(x1==arr[n-k-1]){
					k++;
				}
				else{
					a=0;
					break;
				}
			}
			//case 2 x2
			for(int j=i1,k=i1+1;j<(n-k-1);){
				if(arr[j]==arr[n-k-1]){
					j++;
					k++;
				}
				else if(x2==arr[j]){
					j++;
				}
				else if(x2==arr[n-k-1]){
					k++;
				}
				else{
					b=0;
					break;
				}
			}
		}
		if(check||a||b){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}