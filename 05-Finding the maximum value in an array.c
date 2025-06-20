#include<stdio.h>
#define MAX 1000000

//logic for max function
int max(int n,int arr[]){
    if(n==1)return arr[0];

    int maxval=max(n-1,arr);

    return (arr[n-1]>maxval)?arr[n-1]:maxval;

}


int main(){
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<0 || n>1000000){
        printf("Invalid input\n");
        return -1;
    }

    //logic for taking input
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //logic for output
    printf("The maximum value is: %d\n",max(n,arr));
    
    return 0;
}