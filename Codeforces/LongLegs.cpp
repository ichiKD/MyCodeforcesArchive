#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	long long int a, b;
	long long int x, y;
	long long int L;
	cin>> testcases;
	while(testcases--){
		cin>> x>> y;
		a=max(x, y);
		b=min(x, y);
		long long int ans1, ans2, ans3, ans4, ans5, ans6;
		L=sqrtl(a);
		while(L+(a+L)/(L+1)<=L-1+(a+L-1)/L){
			L++;
		}
		ans1=L-1+(a+L-1)/L+(b+L-1)/L;
		L=sqrtl(b);
		while(L+(b+L)/(L+1)<=L-1+(b+L-1)/L){
			L++;
		}
		ans2=L-1+(a+L-1)/L+(b+L-1)/L;
		L=sqrtl(a);
		while(L>=2&&L-2+(a+L-2)/(L-1)<=L-1+(a+L-1)/L){
			L--;
		}
		ans3=L-1+(a+L-1)/L+(b+L-1)/L;
		L=sqrtl(b);
		while(L>=2&&L-2+(b+L-2)/(L-1)<=L-1+(b+L-1)/L){
			L--;
		}
		ans4=L-1+(a+L-1)/L+(b+L-1)/L;
		L=sqrtl(a+b);
		while(L>=2&&L+(a+L)/(L+1)+(b+L)/(L+1)<=L-1+(a+L-1)/L+(b+L-1)/L){
			L++;
		}
		ans5=L-1+(a+L-1)/L+(b+L-1)/L;
		L=sqrtl(a+b);
		while(L>=2&&L-2+(a+L-2)/(L-1)+(b+L-2)/(L-1)<=L-1+(a+L-1)/L+(b+L-1)/L){
			L--;
		}
		ans6=L-1+(a+L-1)/L+(b+L-1)/L;
		cout<<min(min(min(ans1, ans2), min(ans3, ans4)), min(ans5, ans6))<<"\n";
	}
	return 0;
}