#include <stdio.h>
#include <string.h>
int p[26];
int check(int t){
	int length=2;
	int temp=t;
	for(int i=0;i<26;i++){
		if(t==p[i]){
			return 1;
		}
	}
	temp=p[t];
	while(temp!=t){
		if(p[temp]==-1){
			return 0;
		}
		else{
			length++;
			temp=p[temp];
		}
	}
	if(length==26){
		return 0;
	}
	else{
		return 1;
	}
}
int main(){
	int testcases;
	int n, tar;
	char str[500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		scanf("%s", str);
		memset(p, -1, sizeof(p));
		if(str[0]=='a'){
			p[0]=1;
		}
		else{
			p[str[0]-'a']=0;
		}
		for(int i=1;i<n;i++){
			if(p[str[i]-'a']==-1){
				tar=0;
				while(tar<26){
					if(tar==p[str[i]-'a']||check(tar)){
						tar++;
					}
					else{
						p[str[i]-'a']=tar;
						break;
					}
				}
			}
		}
		for(int i=0;i<26;i++){
			printf("%c ",'a'+ i);
		}
		printf("\n");
		for(int i=0;i<26;i++){
			printf("%c ",'a'+ p[i]);
		}
		printf("\n");
		for(int i=0;i<n;i++){
			printf("%c", p[str[i]-'a']+'a');
		}
		printf("\n");
	}
	return 0;
}