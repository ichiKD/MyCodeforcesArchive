#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string temp;
	int a[100500]={0};
	map<string,int> m;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(m.count(temp)){
			cout<<temp<<a[m[temp]]<<"\n";
			a[m[temp]]++;
		}
		else{
			m[temp]=i;
			a[i]++;
			cout<<"OK\n";
		}
		temp.clear();
	}
	return 0;
}