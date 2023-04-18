#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	long long int n, temp, ans;
	long long int pmf[200500];
	map<long long int, long long int> mpp;
	string st;
	cin>> testcases;
	while(testcases--){
		cin>> n;
		cin>> st;
		// number of subarrays of the array with sum 0 will be our answer
		// prefix sum and hashing
		pmf[0]=st[0]-'1';
		for(int i=1; i<n; i++){
			pmf[i]=pmf[i-1]+ st[i]-'1';
		}
		// key=0 is a special case
		mpp[0]=1; 			
		for(int i=0; i<n; i++){
			if(mpp.count(pmf[i])){
				mpp[pmf[i]]+=1;
			}
			else{
				mpp[pmf[i]]=1;
			}
		}
		ans=0;
		for(auto it : mpp){
			ans+=(it.second)*(it.second-1)/2;
		}
		mpp.clear();
		cout<< ans<< "\n";
	}
	return 0;
}