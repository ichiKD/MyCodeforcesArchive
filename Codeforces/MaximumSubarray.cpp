#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

long long int findbesti(long long int a[], long long int k, long long int x){
	// this function is only valid to find intermediate besti in a very 
	// specific case
	long long int temp=0;
	long long int besti=0;
	for(int i=k-1;i>=0;i--){
		temp+=a[i]+x;
		besti=max(besti, temp);
	}
	return besti;
}
int main() {
    fastIO;
    int testcases;
    long long int n, k, x, t;
    long long int length;
    long long int best, besti;
	// best is the best subarray sum overall
	// besti is the best subarray sum that starts at i
	long long int a[300500], T[300500];
    cin>>testcases;
    while(testcases--) {
        cin>>n>>k>>x;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(k==0||x==0){
			for(int i=0;i<n;i++){
				a[i]-=x;
			}
			best=0;
			besti=0;
			for(int i=0;i<n;i++){
				besti=max(a[i], a[i]+besti);
				best=max(best, besti);
			}
			
		}
		else if(x>0){
			for(int i=0;i<n;i++){
				a[i]-=x;
			}
			for(int i=0;i<40;i++){
				T[n+i]=0;			// just for safety
			}
			T[n-1]=max(0LL, a[n-1]);
			for(int i=n-2;i>=0;i--){
				T[i]=max(0LL, T[i+1]+a[i]);
			}
			best=0;
			for(int i=0;i<n;i++){
				besti=0;
				best=max(best, besti);
				for(int j=0;j<k&&i+j<n;j++){
					besti+=a[i+j]+2*x;
					best=max(best, besti);
				}
				if(i+k-1<n){
					besti+=T[i+k];
					best=max(best, besti);
				}
			}
		}
		else{
			/*
			k=n-k;
			x=-x;
			This will result in O(n^2) solution 
			Solution is O(n)
			*/
			best=0;
			besti=0;
			for(int i=0;i<k;i++){
				besti=0;
				t=k-i;
				// i+1 elements have taken x (negative)
				// t= elements to be given x (negative)
				// n-1, n-2, n-t will be given x
				for(int j=i;j<n-t;j++){
					besti+=a[j]-x;
					best=max(best, besti);
				}
				for(int j=n-t;j<n;j++){
					besti+=a[j]+x;
					best=max(best, besti);
				}
			}
			besti=findbesti(a, k, x);
			// this is used to give besti the best initial value
			// from the prefix array 
			for(int i=k;i<n;i++){
				besti=max(0LL, besti+a[i]-x);
				best=max(best, besti);
			}
		}
		cout<<best<<"\n";
    }
    return 0;
}