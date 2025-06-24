#include<stdio.h>
//logic for lucas function
int lucas(int n){
    if(n==0)return 2;
    if(n==1)return 1;

    return lucas(n-1)+lucas(n-2);
}

int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);


    //logic for output
    for(int i=0;i<n;i++){
        printf("%d ",lucas(i));
    }

    printf("\n");

    return 0;
}