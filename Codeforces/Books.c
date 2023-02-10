#include<stdio.h>

int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

/*
In the original problem if we get to the end we cannot start again somewhere in
the remaining array of books and starting there and adding to the books completed if 
we have enough time remaining.
My general solution solves for the case in which we are allowed to do that.
Actual  solution = O(n)
General solution = O(n^2)

*/


int main(){
	int n, t, sum;
	int count, maxcount;
	int a[100500];
	scanf("%d%d", &n, &t);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	count=0;
	maxcount=0;
	sum=0;
	for(int i=0;i<n;i++){
		if(sum<=t){
			maxcount=max(maxcount, count);
			sum=sum+a[i];
			count++;
		}
		else{
			sum=sum-a[i-count];
			count--;
			i--;
		}
	}
	if(sum<=t){
		maxcount=max(maxcount, count);
	}
	printf("%d", maxcount);
	return 0;
}


/*
The following code solves a more general version of the problem given.

int main(){
	int n, t, sum, ans;
	int count, maxcount;
	int a[100500];
	scanf("%d%d", &n, &t);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	a[n]=0;
	ans=0;
	for(int i=n;0<=i;i--){
		t=t-a[i];
		if(t<0){
			break;
		}
		count=0;
		maxcount=0;
		sum=0;
		for(int j=0;j<i;j++){
			if(sum<=t){
				maxcount=max(maxcount, count);
				sum=sum+a[j];
				count++;
			}
			else{
				sum=sum-a[j-count];
				count--;
				j--;
			}
		}
		if(sum<=t){
			maxcount=max(maxcount, count);
		}
		ans=max(ans, maxcount +n-i);
	}
	printf("%d", ans);
	return 0;
}

*/