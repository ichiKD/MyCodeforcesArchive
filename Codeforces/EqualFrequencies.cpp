#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int comparator(const void *a, const void *b){
	const int* ia = (int*) a;
	const int* ib = (int*) b;
	return ia[0] < ib[0] ? -1 : ia[0] > ib[0];
}

int main(){
	fastIO;
	int testcases, n;
	string st;
	int thismin, min1, min2;
	int min;
	int d, k_final;
	int need, index, extra, less;
	int ans;
	int count[26][2];
	cin>>testcases;
	while(testcases--){
		cin>>n;
		cin>>st;
		if(n<3){
			cout<<"0\n";
			cout<<st<<"\n";
		}
		else{
			for(int i=0;i<26;i++){
				count[i][0]=0;
				count[i][1]='a'+i;
			}
			for(int i=0;i<n;i++){
				++count[st[i]-'a'][0];
			}
			qsort(count, 26, sizeof *count, comparator);
			// k_final=no of different letters in final string
			k_final=1;
			min=55555555;
			for(int k=1;k<=26;k++){
				if(n%k==0){
					min1=min2=0;
					d=n/k;
					need=k;
					index=26;
					for(int i=0;i<26;i++){
						if(count[i][0]>=d){
							index=i;
							break;
						}
					}
					for(int i=index;i<26;i++){
						--need;
						min1+=count[i][0]-d;
					}
					for(int i=index-1;0<=i&&need;i--){
						--need;
						min2+=d-count[i][0];
					}
					thismin=max(min1, min2);
					if(thismin<min){
						k_final=k;
						min=thismin;
					}
				}
			}
			d=n/k_final;
			for(int i=0;i<26;i++){
				if(count[i][0]>d){
					extra=count[i][0]-d;
					for(int j=0;j<n&&extra;j++){
						if(st[j]==count[i][1]){
							--extra;
							st[j]=1;
						}
					}
				}
			}
			for(int i=0;i<26-k_final;i++){
				for(int j=0;j<n;j++){
					if(st[j]==count[i][1]){
						st[j]=1;
					}
				}
			}
			ans=0;
			for(int i=26-k_final;i<26;i++){
				if(count[i][0]<d){
					less=d-count[i][0];
					ans+=less;
					for(int j=0;j<n&&less;j++){
						if(st[j]==1){
							--less;
							st[j]=count[i][1];
						}
					}
				}
			}
			cout<<ans<<"\n";
			cout<<st<<"\n";
		}
	}
	return 0;
}