//WAP to print sum of the series 1-2+3-4+5-6.....upto'n'
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum=0;
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }

    //WE CAN ALSO USE THIS METHOD
    //  for(int i=0;i<=n;i++){
    //     if (i%2!=0) sum=sum+i;
    //     else sum =sum-i;
    // }
    printf("\n%d",sum);
}