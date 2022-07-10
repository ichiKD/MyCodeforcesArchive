#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char array[100];
	scanf("%s",&array);
	if (strstr(array, "1111111") != NULL||strstr(array, "0000000") != NULL) {
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}