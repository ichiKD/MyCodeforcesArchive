#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

// lps[N]= longest proper-prefix suffix
int lps[1005000];

void KPM(string s, int n){
	for(int i=0; i<n; i++){
		lps[i] = 0;
	}
	for(int i=1; i<n; i++){
		int j = lps[i-1];
		while(j>0 && s[i]!=s[j]){
			j = lps[j-1];
		}
		if(s[i] == s[j]){
			++j;
		}
		lps[i] = j;
	}
	return;
}

int main(){
	fastIO;
	int L, ans, ans2;
	string st;
	cin>> st;
	L=st.length();
	KPM(st, L);
	ans=0;
	for(int i=0; i<L-1; i++){
		ans=max(ans, lps[i]);
	}
	if(ans>=lps[L-1]){
		ans=lps[L-1];
	}
	else{
		ans2=lps[L-1];
		while(ans2>ans){
			ans2=lps[ans2-1];
		}
		ans=ans2;
	}
	if(ans&&L>2){
		cout<< st.substr(0, ans)<< "\n";
	}
	else{
		cout<< "Just a legend\n";
	}
	return 0;
}
