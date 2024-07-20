//WAP to take input of two numbers and print value of one number raised to power of another
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of first and second number :");
    scanf("%d %d",&a,&b);
    // int s=a;
    long long product=1;
    for(int i=1;i<=b;i++){
    //    s=s*a;
       product=product*a;
    }
    printf("%lld",product);
}