#include<stdio.h>

//logic for printing the tribonacci 
int trib(int n){
    if(n==0)return 0;

    if(n==1 || n==2)return 1;



    return trib(n-1)+trib(n-2)+trib(n-3);

}


int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);
    
    //logic for output
    for(int i=0;i<n;i++){
        printf("%d ",trib(i));
    }

    printf("\n");


    return 0;
}