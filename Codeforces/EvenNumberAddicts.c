#include<stdio.h>
#include<string.h>

int T[120][120];
int T2[120][120];
int knapsack(int , int);
int knapsack2(int , int);

int knapsack(int EVEN, int ODD){
	if(ODD==0){
		return 1;
	}
	else if(ODD==1){
		return EVEN%2;
	}
	else if(EVEN==0){
		if(((ODD+1)/2)%2==1){
			return 0;
		}
		else{
			return 1;
		}
	}
	else if(EVEN==1){
		ODD=ODD%4;
		if(ODD==2){
			return 0;
		}
		else{
			return 1;
		}
	}
	else if(T[EVEN][ODD]!=-1){
		return T[EVEN][ODD];
	}
	else{
		if(knapsack(EVEN-2, ODD)&&knapsack(EVEN-1, ODD-1)){
			T[EVEN][ODD]=  1;
			return T[EVEN][ODD];
		}
		else if(knapsack2(EVEN, ODD-2)&&knapsack2(EVEN-1, ODD-1)){
			T[EVEN][ODD]=  1;
			return T[EVEN][ODD];
		}
		else{
			T[EVEN][ODD]= 0;
			return T[EVEN][ODD];
		}
	}
}

int knapsack2(int EVEN, int ODD){
	if(ODD==0){
		return 0;
	}
	else if(ODD==1){
		return 1;
	}
	else if(EVEN==0){
		if(((ODD+1)/2)%2==1){
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(EVEN==1){
		ODD=ODD%4;
		if(ODD==0){
			return 0;
		}
		else{
			return 1;
		}
	}
	else if(T2[EVEN][ODD]!=-1){
		return T2[EVEN][ODD];
	}
	else{
		if(knapsack2(EVEN-2, ODD)&&knapsack2(EVEN-1, ODD-1)){
			T2[EVEN][ODD]=  1;
			return T2[EVEN][ODD];
		}
		else if(knapsack(EVEN, ODD-2)&&knapsack(EVEN-1, ODD-1)){
			T2[EVEN][ODD]=  1;
			return T2[EVEN][ODD];
		}
		else{
			T2[EVEN][ODD]= 0;
			return T2[EVEN][ODD];
		}
	}
}

int main(){
	memset(T,-1,sizeof(T));
	memset(T2,-1,sizeof(T2));
	int testcases;
	int n, temp;
	int odd, even;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d", &n);
		odd=even=0;
		for(int i=0;i<n;i++){
			scanf("%d", &temp);
			if(temp%2==1||(-1*temp)%2==1){
				odd++;
			}
			else{
				even++;
			}
		}
		if(knapsack(even, odd)){
			printf("Alice\n");
		}
		else{
			printf("Bob\n");
		}
	}
	return 0;
}
