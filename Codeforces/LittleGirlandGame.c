#include<stdio.h>
#include<string.h>
int main(){
	int n;
	int odd,even,t;
	char s[2000];
	int count[26]={0};
	scanf("%s",s);
	odd=even=0;
	n=strlen(s);
	for(int i=0;i<n;i++){
		count[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(count[i]%2==1){
			odd++;
		}
		else{
			even++;
		}
	}
	t=odd-1;
	if(odd==0||odd==1||t%2==0){
		printf("First");
	}
	else{
		printf("Second");
	}
	return 0;
}