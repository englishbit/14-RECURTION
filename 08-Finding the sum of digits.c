#include<stdio.h>

//logic for calculating the sum
int sum(int num){
    if(num==0)return 0;

    return (num%10)+sum(num/10);
}

int main(){

    //logic for taking input
    int num;
    scanf("%d",&num);
    

    //logic for output
    printf("The sum of digit is %d",sum(num));



    return 0;
}