#include <bits/stdc++.h>
 
using namespace std;

int main(){
	int testcases;
	int m, n, r, c;
	int ans1, ans2, ans3;
	fflush(stdout);
	cin>> testcases;
	while(testcases--){
		cin>> n>> m;
		fflush(stdout);
		cout<< "? 1 1\n";
		fflush(stdout);
		cin>> ans1;
		fflush(stdout);
		if(ans1==0){
			r=1;
			c=1;
		}
		else if(ans1>n-1){
			c=ans1+1;
			cout<< "? 1 "<< c<<"\n";
			fflush(stdout);
			cin>> ans2;
			r=ans2+1;
		}
		else if(ans1>m-1){
			r=ans1+1;
			cout<< "? "<< r<< " 1\n";
			fflush(stdout);
			cin>> ans2;
			c=ans2+1;
		}
		else{
			c=ans1+1;
			cout<< "? 1 "<< c<<"\n";
			fflush(stdout);
			cin>> ans2;
			if(ans1==ans2){
				r=ans1+1;
				cout<< "? "<< r<< " 1\n";
				fflush(stdout);
				cin>> ans3;
				c=ans3+1;
			}
			else{
				c=ans1+1;
				r=ans2+1;
			}
		}
		cout<< "! "<< r<< " "<< c<< "\n";
		fflush(stdout);
	}
}