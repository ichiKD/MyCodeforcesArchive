#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

bool issquare(long long int n) {
    if(n==(long long int)sqrt(n)*(long long int)sqrt(n)){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
    fastIO;
    int testcases, n;
    long long int a[200];
    long long int ans, temp, x;
    long long int num, d;
    long long int p, q;
    cin>>testcases;
    while(testcases--) {
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        ans=1;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                num=a[j]-a[i];
                //q^2-p^2
				//num=(q-p)*(q+p)
                for(int d=1; d<=sqrt(num); d++) {
					if(num%d==0){
						// q+p=num/d
						// q-p=d
						q=(num/d+d)/2;
						p=(num/d-d)/2;
						if((num/d+d)%2==1||(num/d-d)%2==1){
							continue;
						}
						x=p*p-a[i];
						if(x<0){
							continue;
						}
						temp=2;
						for(int k=j+1;k<n;k++){
							temp+=(int)issquare(a[k]+x);
						}
						ans=max(temp, ans);
					}
				}
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}