#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int sieve[10000500];

void speedup(){
	// precalculate the divisors 
	for(int i=1;i<10000500;i++){
		sieve[i]=i;
	}
	for(int i=2;i<10000500;i++){
		if(sieve[i]==i){
			for(int j=2*i;j<10000500;j+=i){
				if(sieve[j]==j){
					sieve[j]=i;
				}
			}
		}
	}
}


int main() {
    fastIO;
    int testcases;
    int x, y;
	int diff, L;
	int temp;
	int a[40]; 	// 2^24>10^7
    int ans;
	speedup();
    cin>>testcases;
    while(testcases--) {
        cin>>x>>y;
		if(y==x+1){
			cout<<"-1\n";
		}
		else{
			diff=y-x;
			// Now I find all the factors of difference
			L=0;
			while(diff!=1){
				temp=sieve[diff];
				a[L]=temp;
				L++;
				while(diff%temp==0){
					diff=diff/temp;
				}
			}
			ans=a[0]-x%a[0];
			for(int i=0;i<L;i++){
				if(x%a[i]){
					ans=min(ans, a[i]-x%a[i]);
				}
				else{
					ans=0;
				}
			}
			cout<<ans<<"\n";
		}
    }
    return 0;
}