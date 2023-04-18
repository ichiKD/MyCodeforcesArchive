#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

long long int sieve[100500];
vector<vector<long long int> > prime_divisors(100500);
void PrimeDivisors(){
	long long int temp;
	for(int i=2;i<100500;i++){
		sieve[i]=i;
	}
	prime_divisors[1]={};
	for(int i=2; i<100500; i++){
		if(sieve[i]==i){
			prime_divisors[i].push_back(i);
			for(int j=i*2; j<100500; j+=i){
				sieve[j]=i;
			}
		}
		else{
			temp=i;
			prime_divisors[i]=prime_divisors[i/sieve[i]];
			prime_divisors[i].push_back(sieve[i]);
		}
	}
	return;
}

int main(){
	fastIO;
	PrimeDivisors();
	long long int n, k, ans=0, perfect=0;
	long long int a[100500];
	map<vector<long long int>, long long int> m;
	cin>> n>> k;
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	for(int i=0; i<n; i++){
		vector<long long int> vec1=prime_divisors[a[i]];
		vector<long long int> vec2={};
		vector<long long int> vec3={};
		int count;
		if(a[i]!=1){
			vec2.push_back(vec1[0]);
			count=1;
			for(int j=1; j<vec1.size(); j++){
				if(vec1[j]!=vec1[j-1]){
					count=1;
					vec2.push_back(vec1[j]);
				}
				else{
					vec2.push_back(vec1[j]);
					count++;
				}
				if(count==k){
					while(count){
						count-=1;
						vec2.pop_back();
					}
				}
			}
			count=0;
			for(int j=0; j<vec2.size(); count=0){
				for(int l=j; l<vec2.size(); l++){
					if(vec2[l]==vec2[j]){
						count++;
					}
					else{
						break;
					}
				}
				for(int l=0; l<k-count; l++){
					vec3.push_back(vec2[j]);
				}
				j+=count;			
			}
		}
		if(vec3.empty()){
			ans+=perfect;
			perfect+=1;
		}
		else{
			if(m.count(vec3)){
				ans+=m[vec3];
			}
			if(m.count(vec2)){
				m[vec2]=m[vec2]+1;
			}
			else{
				m[vec2]=1;
			}
		}
	}
	cout<< ans;
	return 0;
}