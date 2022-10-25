#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparator(const void *p, const void *q) {
	return ( *(int*)p - *(int*)q );
}

int len(int a){
	int numofdigits=0;
	while(a){
		a=a/10;
		++numofdigits;
	}
	return numofdigits;
}

int main(){
	int testcases,  n, ans;
	int a[1000], b[1000];
	int counta[10]={0}, countb[10]={0};
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
		}
		qsort(a, n, sizeof(int), comparator);
		qsort(b, n, sizeof(int), comparator);
		memset(counta, 0, sizeof(int)*10);
		memset(countb, 0, sizeof(int)*10);
		ans=0;
		for(int i=n-1, j=n-1 ; 0<=i&&0<=j; 	){
			if(a[i]<10){
				for(	;0<=i; i--){
					++counta[a[i]];
				}
				for(	;0<=j ;j--){
					if(b[j]<10){
						break;
					}
					else{
						++countb[len(b[j])];
						++ans;
					}
				}
				for(	;0<=j ;j--){
					++countb[b[j]];
				}
			}
			else if(b[i]<10){
				for(	;0<=j ;j--){
					++countb[b[j]];
				}
				for(	;0<=i ;i--){
					if(a[i]<10){
						break;
					}
					else{
						++counta[len(a[i])];
						++ans;
					}
				}
				for(	;0<=i; i--){
					++counta[a[i]];
				}
			}
			else if(i==0){
				++counta[len(a[i])];
				++ans;
				i--;
				for(int d=0;d<=j;d++){
					if(a[0]==b[d]){
						ans=ans-2;
						break;
					}
				}
				for(	;0<=j ;j--){
					if(b[i]<10){
						break;
					}
					else{
						++countb[len(b[j])];
						++ans;
					}
				}
				for(	;0<=j ;j--){
					++countb[b[j]];
				}
			}
			else if(j==0){
				++countb[len(b[j])];
				++ans;
				j--;
				for(int d=0;d<=i;d++){
					if(b[0]==a[d]){
						ans=ans-2;
						break;
					}
				}
				for(	;0<=i ;i--){
					if(a[i]<10){
						break;
					}
					else{
						++counta[len(a[i])];
						++ans;
					}
				}
				for(	;0<=i ;i--){
					++counta[a[i]];
				}
			}
			else if(a[i]==b[j]){
				i--;
				j--;
			}
			else if(a[i]>b[j]){
				++counta[len(a[i])];
				++ans;
				i--;
			}
			else{
				++countb[len(b[j])];
				++ans;
				j--;
			}
		}
		for(int i=2; i<10; i++){
			if(counta[i]>countb[i]){
				counta[i]=counta[i]-countb[i];
				countb[i]=0;
			}
			else if(counta[i]<countb[i]){
				countb[i]=countb[i]-counta[i];
				counta[i]=0;
			}
			else{
				counta[i]=countb[i]=0;
			}
			
		}
		for(int i=2;i<10;i++){
			ans+=counta[i]+countb[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}