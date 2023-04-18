#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int  L[100500];
string st[100500];

void solve() {
	int n, check=0;
	string reverse_st, temp;
	set<string> stset1, stset2, stset3, stset4;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> st[i];
		reverse_st=st[i];
		reverse(reverse_st.begin(), reverse_st.end());
		L[i]=st[i].length();
		if(L[i]==1){
			check=1;
		}
		else if(L[i]==2){
			if(st[i][0]==st[i][1]){
				check=1;
			}
			else if(stset1.count(st[i])){
				check=1;
			}
			stset1.insert(reverse_st);
		}
		else if(L[i]==3){
			if(st[i][0]==st[i][2]){
				check=1;
			}
			else if(stset2.count(st[i])){
				check=1;
			}
			stset2.insert(reverse_st);
		}
	}
	for(int i=0; i<n; i++){
		if(L[i]==2){
			if(stset4.count(st[i])){
				check=1;
				break;
			}
			stset3.insert(st[i]);
		}
		else if(L[i]==3){
			temp=st[i].substr(1, 2);
			reverse(temp.begin(), temp.end());
			if(stset3.count(temp)){
				check=1;
				break;
			}
			temp=st[i].substr(0, 2);
			reverse(temp.begin(), temp.end());
			stset4.insert(temp);
		}
	}
	if(check){
		cout<< "YES\n";
	}
	else{
		cout<< "NO\n";
	}
	return;
}

int main() {
    fastIO;
    int testcases;
    cin>>testcases;
    while(testcases--) {
        solve();
    }
    return 0;
}

/*
all the forms of accepted strings:
length[]= {1, 2, 3, 4, 5, 6}
length=1
a
length=2
aa
length=3
aba
length=4
ab ba
length=5
abc ba   ab cba
length=6
abc bca 
*/