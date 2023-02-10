#include <stdio.h>
int main(){
	int testcases;
	int n, m, k, check, buffer, max;
	int a[100500], b[100500];
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d%d", &n, &m, &k);
		for(int i=0; i<k;i++){
			scanf("%d", &a[i]);
		}
		if(n==1||m==1){
			check=1;
			for(int i=0; i<k;i++){
				if(a[i]!=k-i){
					check=0;
					break;
				}
			}
		}
		else{
			for(int i=0;i<k;i++) {
				b[i]=0;
			}
			max=k;
			buffer=0;
			check=1;
			for(int i=0;i<k;i++){
				if(a[i]!=max){
					buffer++;
					b[a[i]-1]=1;
				}
				else{
					buffer++;
					if(buffer<n*m-2){
						buffer--;
						max=max-1;
						for(int i=max-1;0<=i;i--){
							if(b[i]==1){
								buffer--;
								b[i]=0;
							}
							else{
								max=i+1;
								break;
							}
						}
					}
					else{
						check=0;
						break;
					}
				}
			}
		}
		if(check){
			printf("YA\n");
		}
		else{
			printf("TIDAK\n");
		}
	}
	return 0;
}