#include<stdio.h>

int a[1024], b[1024];
int visited[1024];
int n;
void dfs(int station, int count){
	if(count==1){
		for(int i=station+1;i<n;i++){
			if(a[i]==1){
				if(visited[i]==0){
					visited[i]=1;
					if(b[i]==1){
						dfs(i, 2);
					}
				}
			}
		}
		return;
	}
	else if(count==2){
		for(int i=station-1;i>=0;i--){
			if(b[i]==1){
				if(visited[i]==0){
					visited[i]=1;
				}
			}
		}
		return;
	}
	else{
		return;
	}
}
//0 1 2 3 4 5 .... n-1
int main(){
	int s;
	scanf("%d%d", &n, &s);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d", &b[i]);
	}
	for(int i=0;i<n;i++){
		visited[i]=0;
	}
	if(a[0]==1){
		dfs(0, 1);
	}
	if(visited[s-1]){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}