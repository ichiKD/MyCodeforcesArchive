#include<stdio.h>
int main(){
	long long int a;
	scanf("%lld",&a);
	long long int arr[102400];
	for(int i=0;i<a;i++){
		scanf("%lld",&arr[i]);
	}
	long long int x=-1,y=-1;
	long long int t=1;
	long long int w=1;
	long long int v=1;
	for(int i=1;i<a;i++){
		if(arr[i-1]<arr[i]){}
		else{
			x=i-1;
			t=0;
			break;
		}
	}
	if(t==1){printf("yes\n1 1");}
	else{
		for(int i=x;i<a;i++){
			if(arr[i]>arr[i+1]){}
			else{
				w=0;
				y=i;
				break;
			}
		}
		if(w==1){
			if(x==0){printf("yes\n%lld %lld",x+1,a);}
			else if(arr[a-1]>arr[x-1]){printf("yes\n%lld %lld",x+1,a);}
			else{printf("no");}
		}	
		else{
			for(int i=y;i<a-1;i++){
				if(arr[i]<arr[i+1]){}
				else{
					v=0;
					break;
				}
			}
			if(v==0){printf("no");}
			else{
				if(x==0&&arr[x]<arr[y+1]){
					printf("yes\n%lld %lld",x+1,y+1);
				}
				else if(arr[x-1]<arr[y]&&arr[x]<arr[y+1]){printf("yes\n%lld %lld",x+1,y+1);}
				else{printf("no");}
			}
		}
	}
	return 0;
}