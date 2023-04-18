#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
    long long int testcases, n, x;
    cin>>testcases;
    while(testcases--) {
        cin>> n;
		if(n==1){
			x=0;
		}
		else{
			// sqrt() doesn't work properly in C++ 20, use sqrtl()
			// because sqrt() is for double inputs while sqrtl() is for long double inputs
			x=sqrtl(n-1);
		}
		cout<< x<<"\n";
    }
    return 0;
}