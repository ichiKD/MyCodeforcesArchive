#include<stdio.h>

int length;
int ans[3200][2];

int is_equal(int p[], int n){
	for(int i=0;i<n;i++){
		if(p[0]!=p[i]){
			return 0;
		}
	}
	return 1;
}
int has_one(int p[], int n){
	for(int i=0;i<n;i++){
		if(p[i]==1){
			return 1;
		}
	}
	return 0;
}
int reduce(int p[], int ii, int jj, int n){
	while(p[ii]!=p[jj]){
		if(p[ii]>p[jj]){
			p[ii]=(p[ii]+p[jj]-1)/p[jj];
			ans[length][0]=ii+1;
			ans[length][1]=jj+1;
			length+=1;
		}
		else{
			p[jj]=(p[jj]+p[ii]-1)/p[ii];
			ans[length][0]=jj+1;
			ans[length][1]=ii+1;
			length+=1;
		}
		if(p[ii]==2){
			while(p[jj]!=2){
				p[jj]=(p[jj]+1)/2;
				ans[length][0]=jj+1;
				ans[length][1]=ii+1;
				length+=1;
			}
			return 1;
		}
		if(p[jj]==2){
			while(p[ii]!=2){
				p[ii]=(p[ii]+1)/2;
				ans[length][0]=ii+1;
				ans[length][1]=jj+1;
				length+=1;
			}
			return 1;
		}
	}
	return 0;
}
int main(){
	int testcases;
	int n, index;
	int a[2000];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		if(is_equal(a, n)){
			printf("0\n");
		}
		else if(has_one(a, n)){
			printf("-1\n");
		}
		else{
			// now I just make every element 2
			index=n;
			// index of first 2 in array
			// n signifies that array a[] doesn't have 2 
			// in it already
			for(int i=0;i<n;i++){
				if(a[i]==2){
					index=i;
				}
			}
			length=0;
			if(index!=n){
				for(int i=0;i<index;i++){
					while(a[i]!=2){
						ans[length][0]=i+1;
						ans[length][1]=index+1;
						length+=1;
						a[i]=(a[i]+1)/2;
					}
				}
				for(int i=index+1;i<n;i++){
					while(a[i]!=2){
						ans[length][0]=i+1;
						ans[length][1]=index+1;
						length+=1;
						a[i]=(a[i]+1)/2;
					}
				}
			}
			else{
				for(int i=0;i<n;i++){
					if(a[0]!=a[i]){
						if(reduce(a, 0, i, n)){
							break;
						}
						else{
							for(int j=1;j<i;j++){
								while(a[j]!=a[0]){
									a[j]=(a[j]+a[0]-1)/a[0];
									ans[length][0]=j+1;
									ans[length][1]=0+1;
									length+=1;
								}
							}
						}
					}
				}
				if(a[0]==2){
					index=0;
					for(int i=index+1;i<n;i++){
						while(a[i]!=2){
							ans[length][0]=i+1;
							ans[length][1]=index+1;
							length+=1;
							a[i]=(a[i]+1)/2;
						}
					}
				}
			}
			printf("%d\n", length);
			for(int i=0;i<length;i++){
				printf("%d %d\n", ans[i][0], ans[i][1]);
			}
		}
	}
	return 0;
}