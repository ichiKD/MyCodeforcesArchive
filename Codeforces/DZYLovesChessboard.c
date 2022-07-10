#include<stdio.h>
int main(){
	int n, m;
	char a[101][101];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='.'){
				if((i+j)%2){
					a[i][j]='W';
				}
				else{
					a[i][j]='B';
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
/*
#include<stdio.h>
void dfs(char a[101][101], int m, int n, char c, int i, int j){
	char d;
	if (c=='W'){
		d='B';
	}
	else {
		d='W';
	}
	if(a[i][j]=='.'){
		a[i][j]=c;
		if(i>0){
			dfs(a,n,m,d,i-1,j);
		}
		if(i<n-1){
			dfs(a,n,m,d,i+1,j);
		}
		if(j>0){
			dfs(a,n,m,d,i,j-1);
		}
		if(j<m-1){
			dfs(a,n,m,d,i,j+1);
		}
	}
}

int main(){
	int n, m;
	char a[101][101];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			dfs(a,n,m,'B',i,j);
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
*/