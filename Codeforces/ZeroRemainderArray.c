#include <stdio.h>
#include <stdlib.h>

int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}

int main(){
	int testcases;
    int n, k;
	int maxcount, count, index;
	int a[200500];
    long long int ans;
    scanf("%d", &testcases);
    while(testcases--){
        scanf("%d%d", &n, &k);
        for(int i=0;i<n;i++){
		    scanf("%d", &a[i]);
            a[i]=a[i]%k;
	    }
        qsort(a, n, sizeof(int), comparator);
		if(a[0]==a[n-1]){
			if(a[0]==0){
				ans=0;
			}
			else{
				ans=(long long int)k*n-a[0]+1;
			}
		}
		else{
			ans=0;
			maxcount=0;
			count=1;
			for(int i=0;i<n;i++){
				if(a[i]!=0){
					index=i;
					break;
				}
			}
			for(int i=index+1;i<n;i++){
				if(a[i]!=a[i-1]){
					if(count>maxcount){
						ans=(long long int)k*count-a[i-1]+1;
						maxcount=count;
					}
					count=1;
				}
				else{
					count++;
				}
			}
			if(count>maxcount){
				ans=(long long int)k*count-a[n-1]+1;
			}
		}
		printf("%lld\n", ans);
    }
	return 0;
}