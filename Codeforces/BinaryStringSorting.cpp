#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));


const long long int N=1e12;
string st;


int minDeletion(){
	 string str=st;
	// Length of given string
	int n = str.length();
 
	// Stores the first
	// occurrence of '1'
	int firstIdx1 = -1;
 
	// Stores the last
	// occurrence of '0'
	int lastIdx0 = -1;
 
	// Traverse the string to find
	// the first occurrence of '1'
	for(int i = 0; i < n; i++)
	{
		if (str[i] == '1')
		{
			firstIdx1 = i;
			break;
		}
	}
 
	// Traverse the string to find
	// the last occurrence of '0'
	for(int i = n - 1; i >= 0; i--)
	{
		if (str[i] == '0')
		{
			lastIdx0 = i;
			break;
		}
	}
 
	// Return 0 if the str have
	// only one type of character
	if (firstIdx1 == -1 ||
		 lastIdx0 == -1)
		return 0;
 
	// Initialize count1 and count0 to
	// count '1's before lastIdx0
	// and '0's after firstIdx1
	int count1 = 0, count0 = 0;
 
	// Traverse the string to count0
	for(int i = 0; i < lastIdx0; i++)
	{
		if (str[i] == '1')
		{
			count1++;
		}
	}
 
	// Traverse the string to count1
	for(int i = firstIdx1 + 1; i < n; i++)
	{
		if (str[i] == '1')
		{
			count0++;
		}
	}
 
	// Return the minimum of
	// count0 and count1
	return min(count0, count1);
}

int minDeletions2(){
	string s=st;
	int n = s.size();
	
	// dp[i+1] stores minimum number of
	// deletion to make
	// substring(0, i) valid
	vector<int> dp(n + 1, 0);
	int count1 = 0;
 
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
 
			// Case 1: remove current 0
			// Case 2: keep current 0
			// then delete all 1 before it
			dp[i + 1] = min(count1,
							1 + dp[i]);
		}
		else {
 
			// Appending 1 is always valid
			// if substring(0, i) is sorted
			dp[i + 1] = dp[i];
			count1++;
		}
	}
	return dp[n];
}

int main(){
	fastIO;
	long long int testcases, n, deletetion, swap;
	cin>> testcases;
	while(testcases--){
		cin>> st;
		n=st.length();
		int startzeros=0, endones=0;
		for(int i=0; i<n; i++){
			if(st[i]=='0'){
				startzeros++;
			}
			else{
				break;
			}
		}
		for(int i=n-1; i>=0; i--){
			if(st[i]=='1'){
				endones++;
			}
			else{
				break;
			}
		}
		if(startzeros+endones==n){
			cout<<"0\n";
		}
		else{
			int zero, one;
			zero=one=0;
			// zero= number of zeros after first occurrence of 1
			// one = number of ones before last occurrence of 0 
			for(int i=startzeros; i<n; i++){
				if(st[i]=='0'){
					++zero;
				}
			}
			for(int i=n-1-endones; i>=0; i--){
				if(st[i]=='0'){
					++one;
				}
			}
			
			deletetion=min(zero, one);
			int deletion2=0;
			int a[n+1]={0};
			
			cout<<"no of deletetion1 : "<<minDeletion()<<"\n";
			cout<<"no of deletetion2 : "<<minDeletions2()<<"\n";
			cout<<"no of deletetion3 : "<<deletetion<<"\n";
			// cout<<deletetion*N+swap<<"\n";
		}
	}
	return 0;
}

