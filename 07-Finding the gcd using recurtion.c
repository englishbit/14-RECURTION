#include<stdio.h>

//logic for gcd function
int gcd(int a,int b){
    if(b==0)return a;
    
    return gcd(b,a%b);
}
int main(){

//logic for taking input
int num1,num2;
scanf("%d %d",&num1,&num2);


//logic for printing output
printf("The gcd is %d\n",gcd(num1,num2));

    return 0;
}