#include<stdio.h>
#include<string.h>
int main(){
	int testcases;
	long long int n, m;
	long long int a[500500], p[500500], v[500500];
	long long int count[500500], start[500500];
	long long int sum;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%lld%lld", &n, &m);
		for(int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%lld%lld", &p[i], &v[i]);
			p[i]-=1;
		}
		for(int i=1;i<n+m+1;i++){
			count[i]=0;
		}
		for(int i=0;i<n;i++){
			start[i]=-1;
		}
		// memset(count+1, 0, (n+m+1)*sizeof(long long int));
		// memset(start, -1, n*sizeof(long long int));
		for(int i=0;i<m;i++){
			count[a[p[i]]]+=i-start[p[i]];
			start[p[i]]=i;
			a[p[i]]=v[i];
		}
		for(int i=0;i<n;i++){
			count[a[i]]+=m-start[i];
		}
		sum=n*m*(m+1);
		for(int i=1;i<n+m+1;i++){
			sum-=count[i]*(count[i]-1)/2;
		}
		// sum of distinct elements =total elements- number of repeated elements
		// if a number is present in x arrays out of m+1 then the 
		// number of repetition of that number is xC2 or x*(x-1)/2
		// number of repeated elements= sumof(number of repetition of i)
		// where i is from 1 to m+n
		
		printf("%lld\n", sum);
	}
	return 0;
}