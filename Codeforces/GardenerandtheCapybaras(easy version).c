#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	int L, found;
	int index1, index2;
	char st[120];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%s", st);
		L=strlen(st);
		found=0;
		if(st[0]=='a'){
			for(int i=1;i<L-1;i++){
				if(st[i]=='b'){
					found=1;
					index1=i;
					index2=L-1;
					for(int j=index1+1;j<L-1;j++){
						if(st[j]=='a'){
							index2=j;
							break;
						}
					}
					break;
				}
			}
			if(found==0){
				index1=1;
				index2=2;
			}
		}
		else{
//			st[0]=='b'
			for(int i=1;i<L-1;i++){
				if(st[i]=='a'){
					found=1;
					index1=i;
					index2=i+1;
					for(int j=index1+1;j<L-1;j++){
						if(st[j]=='b'){
							index2=j;
							break;
						}
					}
					break;
				}
			}
			if(found==0){
				index1=1;
				index2=2;
			}
		}
		for(int i=0;i<index1;i++){
			printf("%c", st[i]);
		}
		printf(" ");
		for(int i=index1;i<index2;i++){
			printf("%c", st[i]);
		}
		printf(" ");
		for(int i=index2;i<L;i++){
			printf("%c", st[i]);
		}
		printf("\n");
		for(int i=0;i<L;i++){
			st[i]=0;
		}
	}
	return 0;
}