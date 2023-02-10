#include<bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int len(int a){
	int numofdigits=0;
	while(a){
		a=a/10;
		++numofdigits;
	}
	return numofdigits;
}

int main(){
    fastIO;
	int testcases;
	int n, ans, temp;
	priority_queue<int> p1, p2;
	cin>>testcases;
	while(testcases--){
		ans=0;
		cin>>n;
		// insertion of array a[i] into priority_queue p1
		for(int i=0;i<n;i++){
			cin>>temp;
			p1.emplace(temp);
		}
		// insertion of array b[i] into priority_queue p2
		for(int i=0;i<n;i++){
			cin>>temp;
			p2.emplace(temp);
		}
		for(	;0<n;	){
			if(p1.top()==p2.top()){
				p1.pop();
				p2.pop();
				n--;
			}
			else if(p1.top()>p2.top()){
				p1.emplace(len(p1.top()));
				p1.pop();
				ans++;
			}
			else{
				p2.emplace(len(p2.top()));
				p2.pop();
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}