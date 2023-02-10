#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
    int testcases;
    int n, m;
	int a[500500];
	int b[500500];
	int pmf[500500];
	int rank, score;
    cin>>testcases;
    while(testcases--) {
        cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b, b+n);
		pmf[0]=b[0];
		for(int i=1;i<n;i++){
			pmf[i]=pmf[i-1]+b[i];
		}
		score=0; 
		for(int i=0;i<n;i++){
			if(pmf[i]<=m){
				++score;
			}
			else{
				
				break;
			}
		}
		if(score==n){
			rank=1;
		}
		else if(score==0){
			rank=n+1;
		}
		else{
			rank=n+1-score;
			if(score==1){
				rank=n;
				if(m>=a[1]){
					rank--;
				}
			}
			else if(score==2){
				rank=n-1;
				if(m-pmf[0]>=a[2]){
					rank--;
				}
			}
			else{
				rank=n+1-score;
				if(m-pmf[score-2]>=a[score]){
					rank--;
				}
			}
		}
		cout<<rank<<"\n";
    }
    return 0;
}