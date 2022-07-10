#include<stdio.h>
int main(){
    int n, temp, check=1;
    scanf("%d",&n);
    int count[2]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp==25){
            count[0]++;
        }
        else if(temp==50){
            count[0]--;
            count[1]++;
        }
        else{
            if(count[1]>0){
                count[1]--;
                count[0]--;
            }
            else{
                count[0]=count[0]-3;
            }
        }
        if(count[0]<0||count[1]<0){
            check=0;
            break;
        }
    }
    if(check){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}