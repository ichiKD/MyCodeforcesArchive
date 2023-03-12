#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

using namespace std;

int main(){
	fastIO;
	int testcases;
	int n;
	int a[200500];
	int left, right;
	int min, max;
	cin>>testcases;
	while(testcases--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		min=1;
		max=n;
		left=0;
		right=n-1;
		while(left!=right){
			if(a[left]==min){
				left++;
				min++;
			}
			else if(a[right]==min){
				right--;
				min++;
			}
			else if(a[left]==max){
				left++;
				max--;
			}
			else if(a[right]==max){
				right--;
				max--;
			}
			else{
				break;
			}
		}
		if(left==right){
			cout<<"-1\n";
		}
		else{
			cout<<left+1<<" "<<right+1<<"\n";
		}
	}
	return 0;
}