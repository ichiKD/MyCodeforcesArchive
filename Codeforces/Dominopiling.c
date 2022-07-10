#include<stdio.h>
int main(){
	int M,N;
	scanf("%d%d",&M,&N);
	if(M*N%2==0){
		printf("%d",M*N/2);
	}
	else{
		printf("%d",(M*N-1)/2);
	}
	return 0;
}

/* Actual Submission
#include<stdio.h>
int main(){
	int M,N;
	scanf("%d%d",&M,&N);
	printf("%d",M*N/2);
	return 0;
}
*/