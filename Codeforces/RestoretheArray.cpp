#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main(){
	fastIO;
    int testcases;
    int n;
    int a[200500], b[200500];
    cin>> testcases;
    while(testcases--){
        cin>> n;
        for(int i=0; i<n-1; i++){
            cin>> b[i];
        }
		a[n-1]=b[n-2];
		for(int i=n-2; i>=0; i--){
			if(i==0){
				a[i]=0;
			}
			else if(b[i-1]<=b[i]){
				a[i]=b[i-1];
			}
			else{
				a[i]=0;
				for(int j=i-1; j>=0; j--){
					a[j]=b[j];
					if(j>=1&&a[j]==a[j+1]&&b[j]!=b[j-1]){
						a[j]=min(b[j], b[j-1]);
					}
				}
				break;
			}
		}
        for(int i=0; i<n; i++){
            cout<< a[i]<< " ";
        }
        cout<< "\n";
    }
    return 0;
}