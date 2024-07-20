//WAP to print sum of digits of given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        sum=sum+lastdigit;
    }
    printf("Sum of digit : %d",sum);
}