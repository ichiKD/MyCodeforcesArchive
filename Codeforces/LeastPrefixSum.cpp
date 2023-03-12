#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
    int testcases;
    long long int n, m;
    long long int ans;
	long long int sum, negativesum;
	long long int a[300500];
	priority_queue <long long int, vector<long long int>, greater<long long int> > minheap;  	//minheap
	priority_queue <long long int> maxheap;  						//maxheap
    cin>>testcases;
    while(testcases--) {
        cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ans=0;
		while(!minheap.empty()){
			minheap.pop();
		}
		while(!maxheap.empty()){
			maxheap.pop();
		}
		if(n==1){
			cout<<"0\n";
		}
		else{
			sum=0;
			for(int i=m;i<n;i++){
				if(a[i]>=0){
					sum+=a[i];
				}
				else{
					if(sum+a[i]>=0){
						sum+=a[i];
						minheap.push(a[i]);
					}
					else{
						sum+=a[i];
						minheap.push(a[i]);
						ans+=1;
						sum=sum+(-2*minheap.top());
						minheap.pop();
					}
				}
			}
			negativesum=0;
			// it is named negative because it is negative
			for(int i=m-1;i>0;i--){
				if(a[i]<=0){
					negativesum+=a[i];
				}
				else{
					if(negativesum+a[i]<=0){
						negativesum+=a[i];
						maxheap.push(a[i]);
					}
					else{
						negativesum+=a[i];
						maxheap.push(a[i]);
						ans+=1;
						negativesum=negativesum-2*maxheap.top();
						maxheap.pop();
					}
				}
			}
			cout<<ans<<"\n";
		}
    }
    return 0;
}