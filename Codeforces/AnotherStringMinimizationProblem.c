#include<stdio.h>
int main(){
	int testcases;
	int n,m;
	int a[100];
	char b[100];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++){
			b[i]='B';
		}
		for(int i=0;i<n;i++){
			if(a[i]<1+m-a[i]){
				if(b[a[i]-1]=='B'){
					b[a[i]-1]='A';
				}
				else{
					b[m-a[i]]='A';
				}
			}
			else{
				if(b[m-a[i]]=='B'){
					b[m-a[i]]='A';
				}
				else{
					b[a[i]-1]='A';
				}
			}
		}
		for(int i=0;i<m;i++){
			printf("%c",b[i]);
		}
		printf("\n");
	}
	return 0;
}