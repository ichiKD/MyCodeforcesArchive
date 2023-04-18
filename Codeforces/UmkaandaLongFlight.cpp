#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

long long int F[60];
void Fibonacci(){
	F[0]=1;
	F[1]=1;
	for(int i=2; i<60; i++){
		F[i]=F[i-1]+F[i-2];
	}
	return;
}

int main(){
	fastIO;
	Fibonacci();
	long long int testcases, n, x, y, check;
	long long int height, width;
	cin>> testcases;
	while(testcases--){
		cin>> n>> y>> x;
		check=1;
		height= F[n];
		width = F[n+1];
		for(int i=n, p=0; i>0; i--, p++){
			if(p%2==0){
				if(F[i]<x){
					x=x-F[i];
					width=width-F[i];
				}
				else if(x+F[i]<=width){
					width=width-F[i];
				}
				else{
					check=0;
				}
			}
			else{
				if(F[i]<y){
					y=y-F[i];
					height=height-F[i];
				}
				else if(y+F[i]<=height){
					height=height-F[i];
				}
				else{
					check=0;
				}
			}
		}
		if(check){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}