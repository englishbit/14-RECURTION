#include<stdio.h>

//logic for fact function
int fact(int n){
    if(n==0)return 1;

    return n*fact(n-1);
}


int main(){
    int n;
    scanf("%d",&n);
    //logic for special case
    if(n<0 || n>12){
        printf("Invalid input\n");
        return -1;
    }   


    //logic for ouput
    printf("The factorial of %d is %d\n",n,fact(n));
    return 0;
}
