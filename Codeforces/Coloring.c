#include<stdio.h>
int main(){
	int testcases;
	int n, m ,k;
	int d, r, count;
	int max, check;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d%d", &n, &m, &k);
		for(int i=0;i<m;i++){
			scanf("%d", &a[i]);
		}
		max=a[0];
		for(int i=1;i<m;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		if(m<k){
			check=0;
		}
		else{
			check=1;
		}
		d=n/k;
		r=n%k;
		if(r==0){
			if(max>d){
				check=0;
			}
		}
		else{
			count=0;
			for(int i=0;i<m;i++){
				if(a[i]>d){
					count++;
				}
			}
			if(count>r||max>d+1){
				check=0;
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


/*	Wrong answer, I solved it thinking that the constraint is that the color of (i-k)th 
and (i+k)th index must be different than i th index color for all index i in range (0, n)
Real constraint is that the color of all indexes from [i-k, i+k] ~i must be different
than i th index color for all index i in range (0, n)

int maximumpackingpossible(int n, int k){
	int ans=k*(n/(2*k));
	int r=n%(2*k);
	if(r<k){
		ans+=r;
	}
	else{
		ans+=k;
	}
	return ans;
}

int main(){
	int testcases;
	int n, m ,k;
	int max, packing, check, count;
	int a[200500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d%d", &n, &m, &k);
		for(int i=0;i<m;i++){
			scanf("%d", &a[i]);
		}
		max=a[0];
		for(int i=1;i<m;i++){
			if(max<a[i]){
				max=a[i];
			}
		}
		packing=maximumpackingpossible(n, k);
		if(max<=packing){
			check=1;
		}
		else{
			check=0;
		}
		count=0;
		for(int i=0;i<m;i++){
			if(a[i]==(n+k-1)/k){
				count++;
			}
		}
		printf("%d\n", packing);
		if(check&&count<(n-1)%k){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
*/