#include<stdio.h>
//logic for fibonacci finding function
int fib(int n){
    if(n==0)return 0;

    if(n==1 || n==2){
        return 1;
    }


    return fib(n-1)+fib(n-2);
}



int main(){
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<0 || n>1000){
        printf("Invalid input\n");
        return 1;
    }


    //logic for prining output
    for(int i=0;i<n;i++){
        printf("%d ",fib(i));
    }

    printf("\n");


    return 0;
}