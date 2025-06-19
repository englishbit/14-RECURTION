#include<stdio.h>
#include<string.h>
#define MAX 10000


int palindrome(int left,int right,char str[]){
    if(left>=right)return 1;

    if(str[left]!=str[right])return 0;

    return palindrome(left+1,right-1,str);
}




int main(){

    char str[MAX];
    scanf("%9999s",str);

    int length=strlen(str);

    if(palindrome(0,length-1,str)){printf("yes\n");}
    else{printf("no\n");}







    return 0;
}