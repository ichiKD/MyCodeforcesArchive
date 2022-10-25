#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	int num;
	int n;
	int sum,diff;
	int count[27];
	char str[200500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%s",str);
		scanf("%d",&num);
		n=strlen(str);
		memset(count,0,sizeof(count));
		for(int i=0;i<n;i++){
			++count[1+str[i]-'a'];
		}
		sum=0;
		for(int i=0;i<27;i++){
			sum+=i*count[i];
		}
		if(sum<=num){
			printf("%s\n",str);
		}
		else{
			diff=sum-num;
			for(int i=26;0<i;i--){
				if(i*count[i]<diff){
					diff=diff-count[i]*i;
					count[i]=0;
				}
				else{
					count[i]=count[i]-(diff+i-1)/i;
					diff=0;
					break;
				}
			}
			for(int i=0;i<n;i++){
				if(count[1+str[i]-'a']>0){
					printf("%c",str[i]);
					--count[1+str[i]-'a'];
				}
			}
			printf("\n");
		}
		for(int i=0;i<n;i++){
			str[i]=(char)0;
		}
	}
	return 0;
}