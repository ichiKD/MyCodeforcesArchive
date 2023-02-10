#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));
#define ll long long

int main() {
    fastIO;
    int testcases;
    ll int n, m;
    ll int sum1, sum2, ans, ans1, ans2;
	ll int a[200500];
	priority_queue <ll int, vector<ll int>, greater<ll int> > pqm;  	//minheap
	//priority_queue <ll int, vector<ll int>> pq;  						//maxheap
    cin>>testcases;
    while(testcases--) {
        cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<"0\n";
		}
		else if(m==1){
			sum1=a[0];
			sum2=sum1;
			ans=0;
			for(int i=1;i<n;i++){
				if(a[i]>=0){
					sum2=sum2+a[i];
				}
				else{
					pqm.push(a[i]);
					sum2=sum2+a[i];
					if(sum2<sum1){
						sum2=sum2-2*pqm.top();
						pqm.pop();
						ans++;
					}
				}
			}
			cout<<ans<<"\n";
			// pqm.clear();
			while(!pqm.empty()){
				pqm.pop();
			}
		}
		else{
			for(int i=0;i<m;i++){
				sum1+=a[i];
			}
			sum2=sum1;
			ans=0;
			for(int i=m-1;0<i;i--){
				if(a[i]>0){
					pqm.push(-a[i]);
					sum2=sum2-a[i];
					if(sum2<sum1){
						sum2=sum2-2*pqm.top();
						sum1=sum1+2*pqm.top();
						// cout<<pqm.top()<<"  :1\n";
						pqm.pop();
						ans++;
					}
				}
				else{
					sum2=sum2-a[i];
				}
			}
			while(!pqm.empty()){
				pqm.pop();
			}
			sum2=sum1;
			ans1=0;
			for(int i=m;i<n;i++){
				if(a[i]>=0){
					sum2=sum2+a[i];
				}
				else{
					pqm.push(a[i]);
					sum2=sum2+a[i];
					if(sum2<sum1){
						sum2=sum2-2*pqm.top();
						pqm.pop();
						ans1++;
					}
				}
			}
			cout<<ans+ans1<<"\n";
			// pqm.clear();
			while(!pqm.empty()){
				pqm.pop();
			}
		}
    }
    return 0;
}