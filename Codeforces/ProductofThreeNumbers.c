#include<stdio.h>
#include<math.h>
int main(){
	int testcases;
	int n;
    int a,b,c;
	int temp;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&n);
		temp=sqrt(n);
        a=b=c=0;
        for(int i=2;i<temp;i++){
            if(n%i==0){
                a=i;
                n=n/i;
                temp=sqrt(n);
                if(temp*temp!=n){
                    temp=temp+1;
                }
                for(int j=2;j<temp;j++){
                    if(n%j==0&&j!=a){
                        b=j;
                        c=n/j;
                        break;
                    }
                }
                break;
            }
        }
        if(a&&b&&c){
            printf("YES\n");
            printf("%d %d %d\n",a,b,c);
        }
        else{ 
            printf("NO\n");
        }
    }
	return 0;
}