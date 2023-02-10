#include<stdio.h>
#include<string.h>
int main(){
	int n, check=0;
	char s[200];
	scanf("%s", s);
	n=strlen(s);
	for(int i=0;i<n;i++){
		if(s[i]=='0'||s[i]=='8'){
			printf("YES\n");
			printf("%c\n",s[i]);
			check=1;
			break;
		}
	}
	for(int i=n-1;0<=i&&check==0;i--){
		if(s[i]=='4'){
			for(int j=i-1;0<=j;j--){
				if(s[j]=='2'||s[j]=='6'){
					printf("YES\n");
					printf("%c%c\n",s[j],s[i]);
					check=1;
					break;
				}
			}
			for(int j=i-1;0<=j&&check==0;j--){
				if(s[j]=='4'){
					for(int k=j-1;0<=k;k--){
						if(s[k]=='1'||s[k]=='3'||s[k]=='5'||s[k]=='7'||s[k]=='9'){
							printf("YES\n");
							printf("%c%c%c\n",s[k],s[j],s[i]);
							check=1;
							break;
						}
					}
					break;
				}
			}
			break;
		}
	}
	for(int i=n-1;0<=i&&check==0;i--){
		if(s[i]=='2'){
			for(int j=i-1;0<=j;j--){
				if(s[j]=='3'||s[j]=='7'){
					printf("YES\n");
					printf("%c%c\n",s[j],s[i]);
					check=1;
					break;
				}
			}
			for(int j=i-1;0<=j&&check==0;j--){
				if(s[j]=='1'||s[j]=='5'||s[j]=='9'){
					for(int k=j-1;0<=k;k--){
						if(s[k]=='1'||s[k]=='5'||s[k]=='9'){
							printf("YES\n");
							printf("%c%c%c\n",s[k],s[j],s[i]);
							check=1;
							break;
						}
					}
					break;
				}
			}
			break;
		}
	}
	for(int i=n-1;0<=i&&check==0;i--){
		if(s[i]=='6'){
			for(int j=i-1;0<=j;j--){
				if(s[j]=='1'||s[j]=='5'||s[j]=='9'){
					printf("YES\n");
					printf("%c%c\n",s[j],s[i]);
					check=1;
					break;
				}
			}
			for(int j=i-1;0<=j&&check==0;j--){
				if(s[j]=='3'||s[j]=='7'){
					for(int k=j-1;0<=k;k--){
						if(s[k]=='3'||s[k]=='7'){
							printf("YES\n");
							printf("%c%c%c\n",s[k],s[j],s[i]);
							check=1;
							break;
						}
					}
					break;
				}
			}
			break;
		}
	}
	if(check==0){
		printf("NO\n");
	}
	return 0;
}
