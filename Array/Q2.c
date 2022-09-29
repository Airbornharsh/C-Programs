#include<stdio.h>

int main(){
    int no[5];
    for(int i =0;i<5;i++){
        scanf("%d",&no[i]);
    }
    int k = no[0];

    for(int i =0;i<5;i++){
        if(k>no[i]){
            k = no[i];
        }
    }
    printf("%d",k);
    return 0;
}