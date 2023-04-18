#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main() {
    fastIO;
    int testcases;
	long long int n, temp, check;
	long long int a[200500], sol[200500][2];
    cin>>testcases;
    while(testcases--) {
		cin>> n;
        for(int i=0; i<n; i++){
			cin>> a[i];
		}
		check=1;
		sol[0][0]=0;
		sol[0][1]=1000000001;
		for(int i=1; i<n; i++){
			if(a[i]==a[i-1]){
				sol[i][0]=sol[i-1][0];
				sol[i][1]=sol[i-1][1];
			}
			else if(a[i]>a[i-1]){
				temp=a[i]+a[i-1];
				temp=temp/2;
				// ans= (-infinity, temp) intersection (sol[i-1][0], sol[i]-1[1])
				if(temp<sol[i-1][0]){
					check=0;
				}
				else{
					sol[i][0]=sol[i-1][0];
					sol[i][1]=min(temp, sol[i-1][1]);
				}
			}
			else{
				temp=1+a[i]+a[i-1];
				temp=temp/2;
				// ans= (temp, +infinity) intersection (sol[i-1][0], sol[i-1][1])
				if(temp>sol[i-1][1]){
					check=0;
				}
				else{
					sol[i][0]=max(temp, sol[i-1][0]);
					sol[i][1]=sol[i-1][1];
				}

			}
		}
		if(check){
			cout<< sol[n-1][0]<< "\n";
		}
		else{
			cout<< "-1\n";
		}
    }
    return 0;
}