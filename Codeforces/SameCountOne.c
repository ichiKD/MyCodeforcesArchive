#include<stdio.h>
void case1(int n, int m){
	int b[100500][505];
	int count[100500];
	int total, d;
	int t1, t2, temp;
	int numofswaps;
		total=0;
		for(int i=0;i<n;i++){
			count[i]=0;
			for(int j=0;j<m;j++){
				scanf("%d", &b[i][j]);
				if(b[i][j]){
					count[i]++;
				}
			}
			total+=count[i];
		}
		if(total%n==0){
			d=total/n;
			numofswaps=0;
			for(int i=0;i<n;i++){
				if(d>count[i]){
					numofswaps+=d-count[i];
				}
			}
			printf("%d\n", numofswaps);
			for(int i=0, j=0;j<n&&i<n;){
				if(count[i]>=d){
					i++;
					continue;
				}
				if(count[j]<=d){
					j++;
					continue;
				}
				t1=d-count[i];
				t2=count[j]-d;
				if(t1==t2){
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=count[j]=d;
					i++;
					j++;
				}
				else if(t1>t2){
					temp=t2;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[i][k]=1;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]+=t2;
					count[j]=d;
					j++;
				}
				else{
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[j][k]=0;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=d;
					count[j]-=t1;
					i++;
				}
			}
		}
		else{
			printf("-1\n");
		}
}
void case2(int n, int m){
	int b[505][100500];
	int count[505];
	int total, d;
	int t1, t2, temp;
	int numofswaps;
		total=0;
		for(int i=0;i<n;i++){
			count[i]=0;
			for(int j=0;j<m;j++){
				scanf("%d", &b[i][j]);
				if(b[i][j]){
					count[i]++;
				}
			}
			total+=count[i];
		}
		if(total%n==0){
			d=total/n;
			numofswaps=0;
			for(int i=0;i<n;i++){
				if(d>count[i]){
					numofswaps+=d-count[i];
				}
			}
			printf("%d\n", numofswaps);
			for(int i=0, j=0;j<n&&i<n;){
				if(count[i]>=d){
					i++;
					continue;
				}
				if(count[j]<=d){
					j++;
					continue;
				}
				t1=d-count[i];
				t2=count[j]-d;
				if(t1==t2){
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=count[j]=d;
					i++;
					j++;
				}
				else if(t1>t2){
					temp=t2;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[i][k]=1;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]+=t2;
					count[j]=d;
					j++;
				}
				else{
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[j][k]=0;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=d;
					count[j]-=t1;
					i++;
				}
			}
		}
		else{
			printf("-1\n");
		}
}
void case3(int n, int m){
	int b[2050][2050];
	int count[2050];
	int total, d;
	int t1, t2, temp;
	int numofswaps;
		total=0;
		for(int i=0;i<n;i++){
			count[i]=0;
			for(int j=0;j<m;j++){
				scanf("%d", &b[i][j]);
				if(b[i][j]){
					count[i]++;
				}
			}
			total+=count[i];
		}
		if(total%n==0){
			d=total/n;
			numofswaps=0;
			for(int i=0;i<n;i++){
				if(d>count[i]){
					numofswaps+=d-count[i];
				}
			}
			printf("%d\n", numofswaps);
			for(int i=0, j=0;j<n&&i<n;){
				if(count[i]>=d){
					i++;
					continue;
				}
				if(count[j]<=d){
					j++;
					continue;
				}
				t1=d-count[i];
				t2=count[j]-d;
				if(t1==t2){
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=count[j]=d;
					i++;
					j++;
				}
				else if(t1>t2){
					temp=t2;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[i][k]=1;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]+=t2;
					count[j]=d;
					j++;
				}
				else{
					temp=t1;
					for(int k=0;k<m&&temp;k++){
						if(b[i][k]==0&&b[j][k]==1){
							b[j][k]=0;
							printf("%d %d %d\n", i+1, j+1, k+1);
							temp--;
						}
					}
					count[i]=d;
					count[j]-=t1;
					i++;
				}
			}
		}
		else{
			printf("-1\n");
		}
}
int main(){
	int testcases;
	int n, m;
	scanf("%d", &testcases);
	while(testcases--){
		scanf("%d%d", &n, &m);
		if(n>2000){
			case1(n, m);
		}
		else if(m>2000){
			case2(n, m);
		}
		else{
			case3(n, m);
		}
	}
	return 0;
}