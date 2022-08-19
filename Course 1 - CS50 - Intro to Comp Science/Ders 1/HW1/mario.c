#include <stdio.h>

int main() {
    /*
    write a program that prints mario brackets like this:
    *          *
    **        **  
    ***      ***
    ****    **** 
    *****  *****
    */
    int brackets, i, j;
    printf("Enter number of brackets: ");
    scanf("%d", &brackets);
    for (i = 0; i <= brackets; i++) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        for (j = 0; j < 2*(brackets - i + 1); j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}