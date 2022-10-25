#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char string1[200500],string2[200500];
int permutation[200500],lost[200500];
int length1, length2;
int good(int m){
    for(int i=0;i<length1;i++){
        lost[i]=1;
    }
    for(int i=0;i<m;i++){
        lost[permutation[i]-1]=0;
    }
    int check=0;
    for(int i=length1-1,j=length2-1;0<=i;i--){
        if(lost[i]==1){
            if(string1[i]==string2[j]){
                j--;
            }
        }
        if(j<0){
            check=1;
            break;
        }
    }
    return check;
}
int main(){
	scanf("%s",string1);
    scanf("%s",string2);
    length1=strlen(string1);
    length2=strlen(string2);
    for(int i=0;i<length1;i++){
        scanf("%d",&permutation[i]);
    }
    int low, high, mid;
    low=0;              //good(low)=1
    high=length1+1;     //good(high)=0
    while(high>low+1){
        mid=(high+low)/2;
        if(good(mid)){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    printf("%d",low);
	return 0;
}