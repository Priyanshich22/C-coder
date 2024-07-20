//WAP to print reverse of given number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int lastdigit=n%10;
        n=n/10;
        rev=rev*10;
        rev=rev+lastdigit;
        
           
    }
    printf("reverse of num : %d",rev);
}