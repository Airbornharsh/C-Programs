#include<stdio.h>

int main(){
	int i,j,s;
	scanf("%d",&s);
	for(i=0;i<s;i++){
		for(j=0;j<s;j++){
			if(i==s-1 || i==0 || j == s-1||j==0){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

