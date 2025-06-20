#include<stdio.h>
#define MAX 1000

//logic for mean function
float mean(int indx,int n,int arr[]){
    if(indx==n)return 0;

    
    return arr[indx]+mean(indx+1,n,arr);

}

int main(){
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<0||n>1000){
        printf("Invalid input\n");
        return -1;
    }

    //logic for taking input
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    

    float total_sum=mean(0,n,arr);
    float result=total_sum/n;

    //logic for output
    printf("the mean of array is:%f\n");


    return 0;
}