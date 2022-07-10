#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int check,diff1,diff2;
	int arr[1001][2];
	for(int i=0;i<testcases;i++){
		check=1;
		scanf("%d",&n);
		scanf("%d%d",&arr[0][0],&arr[0][1]);
		if(arr[0][0]<arr[0][1]){check=0;}
		for(int j=1;j<n;j++){
			scanf("%d%d",&arr[j][0],&arr[j][1]);
			diff1=arr[j][0]-arr[j-1][0];
			diff2=arr[j][1]-arr[j-1][1];
			if(diff2<0||diff1<diff2){
				check =0;
			}
		}
		if(check){printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}