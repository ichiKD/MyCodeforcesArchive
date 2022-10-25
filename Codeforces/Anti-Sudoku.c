#include<stdio.h>
int main(){
	int testcases;
	int a[9][9];
	scanf("%d", &testcases);
	while(testcases--){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				scanf("%1d",&a[i][j]);
			}
		}
		a[0][2]=a[0][1];
		a[3][0]=a[3][1];
		a[6][1]=a[6][2];
		a[1][5]=a[1][4];
		a[4][3]=a[4][4];
		a[7][4]=a[7][5];
		a[2][8]=a[2][7];
		a[5][6]=a[5][7];
		a[8][7]=a[8][8];
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}