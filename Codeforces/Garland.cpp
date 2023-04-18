#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve() {
	return;
}

int main() {
    fastIO;
    int testcases, check, L;
	int count1[10], count2[4];
	set<int> intset;
	string a;
    cin>>testcases;
    while(testcases--) {
        cin>> a;
		for(int i=0; i<10; i++){
			count1[i]=0;
		}
		for(int i=0; i<4; i++){
			count2[i]=0;
		}
		for(int i=0; i<4; i++){
			++count1[a[i]-'0'];
		}
		L=0;
		for(int i=0;i<10;i++){
			if(count1[i]){
				count2[L]=count1[i];
				L++;
			}
		}
		if(L==3||L==4){
			cout<<"4\n";
		}
		else if(L==2){
			if(count2[0]==2){
				cout<<"4\n";
			}
			else{
				cout<<"6\n";
			}
		}
		else{
			cout<<"-1\n";
		}
    }
    return 0;
}