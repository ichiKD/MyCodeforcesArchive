#include<stdio.h>
int main(){
	int testcases;
	int n;
	int temp,odd,zero;
	int check;
	int a[200500];
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		temp=a[0]%10;
		if(temp%2==1){
			odd=1;
			for(int i=0;i<n;i++){
				if(a[0]!=a[i]){
					odd=0;
					break;
				}
			}
			if(odd){
				printf("YES\n");
				continue;
			}
		}
		if(temp==0||temp==5){
			zero=1;
			temp=a[0]+a[0]%10;
			for(int i=0;i<n;i++){
				if(temp!=a[i]&&temp!=a[i]+a[i]%10){
					zero=0;
					break;
				}
			}
			if(zero){
				printf("YES\n");
				continue;
			}
		}
		check=1;
		for(int i=0;i<n;i++){
			if(a[i]%2){
				a[i]+=a[i]%10;
				a[i]=a[i]%20;
			}
			else{
				a[i]=a[i]%20;
			}
		}
		if(a[0]==2||a[0]==4||a[0]==8||a[0]==16){
			for(int i=0;i<n;i++){
				if(a[i]==0||a[i]==10||a[i]==6||a[i]==12||a[i]==14||a[i]==18){
					check=0;
					break;
				}
			}
		}
		else{
			for(int i=0;i<n;i++){
				if(a[i]==0||a[i]==10||a[i]==2||a[i]==4||a[i]==8||a[i]==16){
					check=0;
					break;
				}
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