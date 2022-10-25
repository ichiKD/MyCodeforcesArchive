#include<stdio.h>
int main(){
    long long int ax,ay,bx,by,cx,cy;
    long long int ABsqr,BCsqr;
    long long int area;
    scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
    ABsqr=(bx-ax)*(bx-ax)+ (by-ay)*(by-ay);
    BCsqr=(cx-bx)*(cx-bx)+ (cy-by)*(cy-by);
    area=((bx*cy)-(cx*by))-((ax*cy)-(ay*cx))+((ax*by)-(bx*ay));
    if(ABsqr==BCsqr&&area){
        printf("YES");
    }
    else{
         printf("NO");
    }
}