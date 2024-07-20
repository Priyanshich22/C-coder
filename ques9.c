//WAP to print fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i=0;
    int a=1;
    int sum;    
    if (n==1) printf("0\n");
    else if(n>=2){
        printf("%d %d ",i,a);
        for(int s=1;s<n-1;s++){
        sum=i+a;
        printf("%d ",sum);
        i=a;
        a=sum;

    }
}
}
    // int s=1;    
    // printf("%d %d ",i,a);
    // while(s<=n-2){
    //     sum=i+a;
    //     printf("%d ",sum);
    //     i=a;
    //     a=sum;       
    //     s++;
    // }
