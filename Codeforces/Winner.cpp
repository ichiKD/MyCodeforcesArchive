#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;

int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	fastIO;
	int n, num, maximum;
	string temp, ans;
	string st[1024];
	int a[1024];
	set <string> strSet;
	map <string, int> m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		cin>>num;
		if(m.count(temp)){
			m[temp]+=num;
		}
		else{
			m[temp]=num;
		}
		st[i]=temp;
		a[i]=num;
		temp.clear();
	}
	maximum=0;
	for (auto it = m.begin(); it != m.end(); it++){
		maximum=max(maximum, it->second);
	}
	for (auto it = m.begin(); it != m.end(); it++){
		if(maximum==it->second){
			strSet.insert(it->first);
		}
	}
	m.clear();
	for(int i=0;i<n;i++){
		if(strSet.count(st[i])){
			if(m.count(st[i])){
				m[st[i]]+=a[i];
			}
			else{
				m[st[i]]=a[i];
			}
			if(m[st[i]]>=maximum){
				ans=st[i];
				break;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}