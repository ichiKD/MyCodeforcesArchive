#include <stdio.h>

int main() {
    int n, zero, one;
	int a[20];
	int start, end;
    scanf("%d", &n);
	one=0;
	for(int i=0;i<n;i++){
		scanf("%1d", &a[i]);
		one+=a[i];
	}
	zero=n-one;
	start=1<<one;
	end=(1<<n)-(1<<zero)+1;
	for(int i=start;i<=end;i++){
		printf("%d ",i);
	}
    return 0;
}