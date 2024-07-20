//WAP to print sum of given number and its reverse
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int real=n;
    int rev=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        rev=rev*10;
        rev=rev+lastdigit;      
    }
    int sum =real+rev;
    printf("Reverse is :%d",rev);
    printf("\nsum of given num and its reverse : %d",sum);
}
