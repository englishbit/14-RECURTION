#include<stdio.h>
#include<string.h>
void reverse(char arr[],int left,int right){
    if(left>=right)
    return;

    char temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;

    reverse(arr,left+1,right-1);

    }
int main(){
    int n;
    scanf("%d",&n);
    if(n<1){
        printf("Invalid input\n");
        return -1;
    }

    char strng[n+1];
    scanf("%s",strng);

    if(strlen(strng)>n){
        printf("Invalid input\n");
        return -1;
    }


    printf("Before reversing the array:\n");
    for(int i=0;i<strlen(strng);i++){
        printf("%c",strng[i]);
    }
    printf("\n");
 


    reverse(strng,0,strlen(strng)-1); 




    printf("After reversing the array:\n");
    for(int i=0;i<strlen(strng);i++){
        printf("%c",strng[i]);
    }
    printf("\n");


    return 0;
}
