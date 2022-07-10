#include<stdio.h>
int main(){
	int levels, p , q;
	scanf("%d%d",&levels, &p);
	int Plevs[p];
	for(int i=0; i<p;i++){
		scanf("%d",&Plevs[i]);
	}
	scanf("%d", &q);
	int Qlevs[q];
	for(int i=0; i<q;i++){
		scanf("%d",&Qlevs[i]);
	}
	int check=1;
	for(int i=1; i<=levels&&check==1;i++){
		for(int j=0; j<=p;j++){
			if(i==Plevs[j]){
				check=1;
				break;
			}
			else{check=0;}
		}
		for(int j=0; j<=q&&check==0;j++){
			if(i==Qlevs[j]){
				check=1;
			}
		}
	}
	if(check==1){printf("I become the guy.");}
	else{printf("Oh, my keyboard!");}
	return 0;
}