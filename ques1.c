//WAP to count digits of given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int i =0;
    while(n!=0){
        n=n/10;
        i=i+1;
    }
    printf("number of digits are: %d",i);
}