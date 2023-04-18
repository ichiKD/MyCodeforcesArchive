#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	int testcases;
	long long int k;
	string st;
	cin>> testcases;
	while(testcases--){
		cin>> k;
		st="";
		while(k!=0){
			if(k%9<4){
				st+='0'+k%9;
			}
			else{
				st+='0'+k%9+1;
			}
			k=k/9;
		}
		reverse(st.begin(), st.end());
		cout<< st<< "\n";
	}
	return 0;
}