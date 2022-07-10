#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n][3];
	int force[3]={0};
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&arr[i][0], &arr[i][1], &arr[i][2]);
		force[0]+=arr[i][0];
		force[1]+=arr[i][1];
		force[2]+=arr[i][2];
	}
	if(force[0]==0&&force[1]==0&&force[2]==0){printf("YES");}
	else{printf("NO");}
	return 0;
}