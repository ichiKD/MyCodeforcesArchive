#include<stdio.h>
#include<string.h>

int min(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}
int is_empty(int p[], int n){
	for(int i=0;i<n;i++){
		if(p[i]==1){
			return 0;
		}
	}
	return 1;
}
int is_equal(int p[], int q[], int n){
	for(int i=0;i<n;i++){
		if(p[i]!=q[i]){
			return 0;
		}
	}
	return 1;
}
/*
void pt(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
*/
void operation(int a[], int k, int n){
	int atemp1[2500];
	int atemp2[2500];
	for(int i=0;i<n;i++){
		atemp1[i]=a[i];
		atemp2[i]=a[i];
	}
	if(k>0){
		// left shift
		for(int i=n-1-k; i>=0; i--){
			a[i]=atemp1[i]^atemp2[i+k];
		}
	}
	else{
		// right shift
		k=-k;
		for(int i=k;i<n;i++){
			a[i]=atemp1[i]^atemp2[i-k];
		}
	}
}
void test(){
	int a[2500];
	int n, shift;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%1d", &a[i]);
	}
	while(1){
		scanf("%d", &shift);
		operation(a, shift, n);
		for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}
int main(){
	int testcases;
	int n, length;
	int a[2500], b[2500];
	int ans[2500];
	//test();
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%1d", &a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%1d", &b[i]);
		}
		if(is_equal(a, b, n)==1){
			printf("0\n");
		}
		else if(is_empty(a, n)==1){
			printf("-1\n");
		}
		else if(is_empty(b, n)==1){
			printf("-1\n");
		}
		else{
			int index1, index2=n-1;
			for(int i=0;i<n;i++){
				if(b[i]==1){
					index1=i;
					break;
				}
			}
			for(int i=index1;i<n;i++){
				if(b[i]==0){
					index2=i-1;
					break;
				}
			}
			int index3;
			for(int i=0;i<n;i++){
				if(a[i]==1){
					index3=i;
					break;
				}
			}
			length=0;
			if(b[index2]==a[index2]){
				// do nothing
			}
			else if(index3<index2){
				ans[length]=index3-index2;
				operation(a, ans[length], n);
				length++;
			}
			else{
				ans[length]=index3-index2;
				operation(a, ans[length], n);
				length++;
			}
			index3=min(index3, index2);
			for(int i=index2+1;i<n;i++){
				if(b[i]!=a[i]){
					// right shift
					ans[length]=index3-i;
					operation(a, ans[length], n);
					length++;
				}
			}
			int index4;
			for(int i=n-1;i>=0;i--){
				if(a[i]==1){
					index4=i;
					break;
				}
			}
			for(int i=index2;i>=0;i--){
				if(b[i]!=a[i]){
					// left shift
					ans[length]=index4-i;
					operation(a, ans[length], n);
					length++;
				}
			}
			printf("%d\n", length);
			for(int i=0;i<length;i++){
				printf("%d ", ans[i]);
			}
			printf("\n");
		}
	}
	return 0;
}