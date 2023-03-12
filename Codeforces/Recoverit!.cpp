#include <bits/stdc++.h>
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;


int sieve[2750131+100][2];
 
void speedup(){
	// precalculate the divisors 
	for(int i=1;i<2750131+100;i++){
		sieve[i][0]=i;
	}
	for(int i=2;i<2750131+100;i++){
		if(sieve[i][0]==i){
			for(int j=2*i;j<2750131+100;j+=i){
				if(sieve[j][0]==j){
					sieve[j][0]=i;
				}
			}
		}
	}
	int count=1;
	for(int i=2;i<2750131+100;i++){
		if(sieve[i][0]==i){
			sieve[i][1]=count;
			count++;
		}
		else{
			sieve[i][1]=0;
		}
	}
}

int main(){
	fastIO;
	int n;
	int temp;
	vector<int> vec;
	multiset<int> mset;
	speedup();
	cin>>n;
	for(int i=0;i<2*n;i++){
		cin>>temp;
		mset.insert(temp);
	}
	for(auto it=mset.rbegin();it != mset.rend(); it++){
		temp=*it;
		if(sieve[temp][0]==temp){
			vec.push_back(sieve[temp][1]);
			mset.erase(mset.find(sieve[temp][1]));
		}
		else{
			vec.push_back(temp);
			mset.erase(mset.find(temp/sieve[temp][0]));
		}
	}
	for(auto it: vec){
		cout<< it<< " ";
	}
	return 0;
}