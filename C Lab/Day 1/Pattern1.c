#include<stdio.h>

int main(){
	int i,j,s;
	scanf("%d",&s);
	for(i=0;i<=s;i++){
		for(j=0;j<=s;j++){
			printf("*");
		}
		printf("\n");
	}
}
