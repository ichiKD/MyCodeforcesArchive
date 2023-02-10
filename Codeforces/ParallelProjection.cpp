#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
	int testcases;
	int w, d, h;
	int a, b, f, g;
	int t1, t2, t3, t4;
	int ans;
	cin>>testcases;
	while(testcases--){
		cin>>w>>d>>h;
		cin>>a>>b>>f>>g;
		t1=2*d-b-g+ abs(f-a);
		t2=b+g+ abs(f-a);
		t3=2*w-a-f+ abs(g-b);
		t4=a+f+ abs(g-b);
		ans=min(min(t1, t2), min(t3, t4));
		ans=ans+h;
		cout<<ans<<"\n";
	}
	return 0;
}