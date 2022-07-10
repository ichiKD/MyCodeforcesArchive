#include<stdio.h>
#include<math.h>
int main(){
	int testcases;
	int n, k;
	int fn, temp;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d",&n, &k);
		fn=n;
		if(n%2==0){
			printf("%d\n",n+k*2);
		}
		else{
			fn=n;
			temp=sqrt(n);
			for(int i=3;i<=temp;i++){
				if(n%i==0){
					fn=i;
					break;
				}
			}
			printf("%d\n",n+fn+(k-1)*2);
		}
	}
	return 0;
}