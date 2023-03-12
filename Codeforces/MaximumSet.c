#include<stdio.h>
int main(){
	int testcases;
	long long int left, right, temp;
	long long int k, d, num;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%lld%lld", &left, &right);
		if(2*left>right){
			printf("%lld %lld\n", 1, right+1-left);
		}
		else{
			k=0;
			temp=2*left;
			while(temp<=right){
				temp=2*temp;
				k++;
			}
			d=1L<<k;
			num=1+right/d-left;
			d=3*d/2;
			temp=right/d;
			if(right/d>=left){
				num+=(1+right/d-left)*k;
			}
			printf("%lld %lld\n", k+1, num%998244353);
		}
	}
	return 0;
}