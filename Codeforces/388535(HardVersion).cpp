#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int a[200500];
bitset<32> bset[200500];
void solve(){
	int left, right, n;
	int x, d, count;
	bitset<32> bans;
	cin>> left>> right;
	n=right+1-left;
	// left=0 
	for(int i=0; i<right+1-left; i++){
		cin>> a[i];
		bset[i]=a[i];
	}
	if(left==0){
		for(int i=0; i<31; i++){
			count=0;
			for(int j=0; j<n; j++){
				if(bset[j][i]==1){
					count++;
				}
			}
			if((1<<i)<n){
				int temp=n/(1<<(i+1))*(1<<i);
				if(n%(1<<(i+1))>(1<<i)){
					temp+=n%(1<<i);
				}
				if(count==temp){
					bans[i]=0;
				}
				else{
					bans[i]=1;
				}
			}
			else{
				if(count){
					bans[i]=1;
				}
				else{
					bans[i]=0;
				}
			}
		}
		x=0;
		for(int i=0; i<31; i++){
			x += bans[i]<<i;
		}
		// cout<< bans << "\n";
		cout<< x << "\n";
		return;
	}
	else{
		for(int i=0; i<31; i++){
			count=0;
			for(int j=0; j<n; j++){
				if(bset[j][i]==1){
					count++;
				}
			}
			if((1<<i)<(right+1)){
				int temp=(right+1)/(1<<(i+1))*(1<<i);
				if((right+1)%(1<<(i+1))>(1<<i)){
					temp+=(right+1)%(1<<i);
				}
				temp-=(left)/(1<<(i+1))*(1<<i);
				if((left)%(1<<(i+1))>(1<<i)){
					temp-=(left)%(1<<i);
				}
				if(count==temp){
					bans[i]=0;
				}
				else{
					bans[i]=1;
				}
			}
			else{
				if(count){
					bans[i]=1;
				}
				else{
					bans[i]=0;
				}
			}
		}
		x=0;
		for(int i=0; i<31; i++){
			x += bans[i]<<i;
		}
		// cout<< bans << "\n";
		cout<< x << "\n";
		return;
	}
}

int main(){
	fastIO;
    int testcases;
	cin>>testcases;
	while(testcases--){
		solve();
	}
	return 0;
}