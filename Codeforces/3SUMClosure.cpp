#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int testcases;
	int size;
	int check;
	int temp;
	int p,n,z,l;
	int a[60];
	cin>>testcases;
	while(testcases--){
		unordered_set <int> intset;
		cin>>size;
		l=0;
		p=n=z=0;
		for(int i=0;i<size;i++){
			cin>>temp;
			if(temp>0){
				p++;
				a[l]=temp;
				l++;
			}
			else if(temp<0){
				n++;
				a[l]=temp;
				l++;
			}
			else{
				z++;
				if(z==1){
					a[l]=temp;
					l++;	
				}
			}
		}
		check=1;
		if(p>2||n>2){
			check=0;
		}
		size=p+n;
		if(z>0){
			size+=1;
		}
		for(int i=0;i<size;i++){
			intset.insert(a[i]);
		}
		for(int i=0;i<size&&check;i++){
			for(int j=i+1;j<size&&check;j++){
				for(int k=j+1;k<size;k++){
					if(intset.count(a[i]+a[j]+a[k])==0){
						check=0;
						break;
					}
				}
			}
		}
		if(check){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		intset.clear();
	}
	return 0;
}




