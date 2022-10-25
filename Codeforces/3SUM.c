#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	int n, temp;
	int check, length;
	int arr[40];
	int count[10];
	scanf("%d",&testcases);
	while(testcases--){
		check=0;
		memset(count, 0, sizeof(count));
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			++count[temp%10];
		}
		for(int i=0;i<10;i++){
			if(count[i]>3){
				count[i]=3;
			}
		}
		length=0;
		for(int i=0;i<10;i++){
			if(count[i]==1){
				arr[length]=i;
			}
			else if(count[i]==2){
				arr[length]=i;
				arr[length+1]=i;
			}
			else if(count[i]==3){
				arr[length]=i;
				arr[length+1]=i;
				arr[length+2]=i;
			}
			length+=count[i];
		}
		for(int i=0;i<length;i++){
			for(int j=i+1;j<length;j++){
				for(int k=j+1;k<length;k++){
					temp=arr[i]+arr[j]+arr[k];
					if(temp==3||temp==13||temp==23){
						check=1;
						break;
					}
				}
				if(check){
					break;
				}
			}
			if(check){
				break;
			}
		}
		if(check){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}