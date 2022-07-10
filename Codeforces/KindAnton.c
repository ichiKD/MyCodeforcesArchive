#include<stdio.h>
int main(){
	int testcases;
	scanf("%d",&testcases);
	int n;
	int a[100500];
	int c[100500][3];
	int b[100500];
	int check;
	int z=0;
	while(testcases--){
		z=z+1;
		scanf("%d",&n);
		check=1;
		c[0][0]=0;
		c[0][1]=0;
		c[0][2]=0;
		scanf("%d",&a[0]);
		c[0][a[0]+1]=1;
		for(int i=1;i<n;i++){
			scanf("%d",&a[i]);
			c[i][0]=c[i-1][0];
			c[i][1]=c[i-1][1];
			c[i][2]=c[i-1][2];
			c[i][a[i]+1]=1;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		if(a[0]!=b[0]){
			check=0;
		}
		for(int i=1;i<n&&check;i++){
			if(b[n-i]>1){
				if(c[n-i-1][2]==1){check=1;}
				else{check=0;}
			}
			else if(b[n-i]==1){
				if(c[n-i-1][2]==1||a[n-i]==1){check=1;}
				else{check=0;}
			}
			else if(b[n-i]==0){
				if(a[n-i]==1&&c[n-i-1][0]==1){check=1;}
				else if(a[n-i]==0){check=1;}
				else if(a[n-i]==-1&&c[n-i-1][2]==1){check=1;}
				else{check=0;}
			}
			else if(b[n-i]==-1){
				if(c[n-i-1][0]==1||a[n-i]==-1){check=1;}
				else{check=0;}
			}
			else{
				if(c[n-i-1][0]==1){check=1;}
				else{check=0;}
			}
		}
		if(check){printf("YES\n");}
		else{printf("NO\n");}
	}
	return 0;
}