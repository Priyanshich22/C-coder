//WAP to print factorial of a given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;

    }
    
    // WE CAN ALSO USE :
    // int i=1;
    // int a =n;
    // n=n-1;
    // while(i<=n){
    //     a=a*n;
    //     n=n-1;   
    // printf("%d",a); 
    
    printf("%d",product);

}