#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

#define MOD 200500

int b[400500];
int T[400500];

int main(){
	fastIO;
	int testcases;
	int n;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<=n;i++){
			T[i]=-1;
		}
		T[1]=0;
		T[0]=0;
		if(b[0]<MOD){
			T[1+b[0]]=1;
		}
		for(int i=2;i<=n;i++){
			if(T[i]==1){
				if(b[i]<MOD){
					T[i+b[i]+1]=1;
				}
			}
			else if(T[i]==-1){
				if(b[i-1]==i-1){
					T[i]=1;
					if(b[i]<MOD){
						T[i+b[i]+1]=1;
					}
				}
				else if(b[i-1]>i-1){
					T[i]=0;
				}
				else{
					if(T[(i-1)-b[i-1]]==1){
						T[i]=1;
						if(b[i]<MOD){
							T[i+b[i]+1]=1;
						}
					}
					else{
						T[i]=0;
					}
				}
			}
		}
		if(T[n]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		/*DEBUG Function
		for(int i=0;i<n;i++){
			cout<<T[i+1]<<" ";
		}
		cout<<"\n";
		*/
		
	}
	return 0;
}

/*
 Recursive solution

int MOD=200500;
 
int b[200500];
int T[200500];
 
int Sequence(int n){
	if(n==1||n<1){
		return 0;
	}
	else if(b[n-1]==n-1){
		T[n]= 1;
		return T[n];
	}
	else if(T[n]!=-1){
		return T[n];
	}
	else{
		if(Sequence(n-(b[n-1]+1))){
			T[n]= 1;
			if(b[n]<MOD){
				T[n+b[n]+1]=1;
			}
			return T[n];
		}
		if(b[0]==n-1){
			T[n]= 1;
			if(b[n]<MOD){
				T[n+b[n]+1]=1;
			}
			return T[n];
		}
		for(int i=1;i<n-1;i++){
			if(i+b[i]==n-1){
				if(Sequence(i)){
					T[n]= 1;
					if(b[n]<MOD){
						T[n+b[n]+1]=1;
					}
					return T[n];
				}
			}
		}
		T[n]= 0;
		return T[n];
	}
}
int main(){
	fastIO;
	int testcases;
	int n;
	// int T[200];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<=n;i++){
			T[i]=-1;
		}
		if(Sequence(n)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		// DEBUG Function
		// for(int i=0;i<n;i++){
			// cout<<Sequence(i+1)<<" ";
		// }
		// cout<<"\n";
	}
	return 0;
}

*/