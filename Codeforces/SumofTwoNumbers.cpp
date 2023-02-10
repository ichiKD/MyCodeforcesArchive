#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

#define MOD 200500
int sumofdigit(int a){
	int sum=0;
	while(a){
		sum+=a%10;
		a=a/10;
	}
	return sum;
}
int main(){
	fastIO;
	int testcases;
	int n;
	int x, y;
	int t, count;
	cin>>testcases;
	for(	;testcases--;	){
		cin>>n;
		x=(n+1)/2;
		y=n/2;
		if(x==y){
			cout<<x<<" "<<y<<"\n";
		}
		else if(abs(sumofdigit(x)-sumofdigit(y))<2){
			cout<<x<<" "<<y<<"\n";
		}
		else{
			x=x+4;
			y=y-4;
			t=10;
			count=1;
			while(abs(sumofdigit(x)-sumofdigit(y))>=2&&count<9){
				if(count%2){
					x=x+4*t;
					y=y-4*t;
				}
				else{
					x=x+5*t;
					y=y-5*t;
				}
				t=t*10;
				count++;
			}
			if(count==9){
				break;
			}
			cout<<x<<" "<<y<<"\n";
		}
	}
	return 0;
}