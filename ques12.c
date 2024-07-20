//WAP to print all ASCII value and equivalent character of 26 alphabets using while loop(Capital case)
#include <stdio.h>
int main() {
    for(int i=65;i<=90;i++){
        printf("%d",i);
        char ch=(char)i;
        printf(" %c \n",ch);
    }
    
    return 0;
}