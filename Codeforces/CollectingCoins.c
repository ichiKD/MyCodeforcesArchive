#include<stdio.h>

int check(int x,int y,int z,int w){
	if(z>=x&&z>=y){
		return w>=2*z-x-y?1:0;
	}
	else if(y>=x&&y>=z){
		return w>=2*y-x-z?1:0;
	}
	else if(x>=y&&x>=z){
		return w>=2*x-y-z?1:0;
	}
}


int main(){
	int t;
	scanf("%d",&t);
	int array[t][4];
	for(int i=0;i<t;i++){
		scanf("%d%d%d%d",&array[i][0],&array[i][1],&array[i][2],&array[i][3]);
	}
	for(int j=0;j<t;j++){
		if ((array[j][0]+array[j][1]+array[j][2]+array[j][3])%3==0&&check(array[j][0],array[j][1],array[j][2],array[j][3])){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}

//sum%3 && equalization can be achived

