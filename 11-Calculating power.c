#include<stdio.h>
//logic for power function
double power(double a,int b){
    if(b==0)return 1;

    return a*power(a,b-1);
}

int main(){
    double a;
    int b;
    
    //logic for taking input
    printf("Enter the base:\n");
    scanf("%lf",&a);
    printf("Enter the power:\n");
    scanf("%d",&b);

    //logic for special case
    if(b<0){
        printf("Invalid input\n");
        return -1;
    }

    //logic for output
    printf("The power is:%lf\n",power(a,b));

    return 0;
}