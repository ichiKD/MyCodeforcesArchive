#include<stdio.h>
int main(){
	int testcases;
	int n,m;
	int a[600][600];
	int countof1;
	int temp;
	int mode1,mode2; //number of connected zeros
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&m);
		countof1=0;
		mode1=mode2=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%1d",&a[i][j]);
				if(a[i][j]==1){
					countof1+=1;
				}
			}
		}
		for(int i=1;i<n-1&&mode2==0;i++){
			for(int j=1;j<m-1;j++){
				if(a[i][j]==0){
					temp=a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i-1][j]+a[i+1][j+1]+a[i-1][j+1]+a[i+1][j-1]+a[i-1][j-1];
					if(temp==8){
						mode1=1;
					}
					else{
						mode2=1;
						break;
					}
				}
			}
		}
		for(int i=1;i<m-1;i++){
			if(a[0][i]==0){
				mode1=1;
				if(a[0][i+1]==0){
					mode2=1;
					break;
				}
			}
		}
		for(int i=1;i<m-1;i++){
			if(a[n-1][i]==0){
				mode1=1;
				if(a[n-1][i+1]==0){
					mode2=1;
					break;
				}
			}
		}
		for(int i=1;i<n-1;i++){
			if(a[i][0]==0){
				mode1=1;
				if(a[i+1][0]==0){
					mode2=1;
					break;
				}
			}
		}
		for(int i=1;i<n-1;i++){
			if(a[i][m-1]==0){
				mode1=1;
				if(a[i+1][m-1]==0){
					mode2=1;
					break;
				}
			}
		}
		temp=a[0][0]+a[0][1]+a[1][0];
		if(temp<=1){
			mode2=1;
		}
		else if(temp==2){
			mode1=1;
		}
		temp=a[n-1][0]+a[n-1][1]+a[n-2][0];
		if(temp<=1){
			mode2=1;
		}
		else if(temp==2){
			mode1=1;
		}
		temp=a[0][m-1]+a[0][m-2]+a[1][m-1];
		if(temp<=1){
			mode2=1;
		}
		else if(temp==2){
			mode1=1;
		}
		temp=a[n-1][m-1]+a[n-2][m-1]+a[n-1][m-2];
		if(temp<=1){
			mode2=1;
		}
		else if(temp==2){
			mode1=1;
		}
		if(n==2){
			for(int i=0;i<m-1;i++){
				temp=a[0][i]+a[1][i]+a[0][i+1]+a[1][i+1];
				if(temp<3){
					mode2=1;
					break;
				}
			}
		}
		if(m==2){
			for(int i=0;i<n-1;i++){
				temp=a[i][0]+a[i][1]+a[i+1][0]+a[i+1][1];
				if(temp<3){
					mode2=1;
					break;
				}
			}
		}
		if(mode2){
			printf("%d\n",countof1);
		}
		else if(mode1){
			printf("%d\n",countof1-1);
		}
		else{
			printf("%d\n",countof1-2);
		}
	}
	return 0;
}