#include<stdio.h>
int main(){
    for (int i=1;i<=500;i++){
        int sum=0;
        int n=i;
        int num;
        while(n!=0){
            num=n%10;
            sum+=num*num*num;
            n/=10;
        }
    if (sum==i)
    printf("%d ",i);

        
    }
}