//WAP to print fibonacci number of first n number
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);
    printf("First %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    return 0;
}
