#include <stdio.h>

int main() {
    int value = 1; 
    int counter = 0;
    printf("signed int one\n");
    while (value>0) {
        counter++;
        value *= 2;
        printf("%d\t", value);
        printf("counter: %d\n", counter);
    }
    value = +1;
    printf("%d\n", value);
    unsigned int value2 = 1;
    counter = 0;
    printf("unsigned int one\n");
    while (value2>0) {
        counter++;
        value2 *= 2;
        printf("%u\t", value2);
        printf("counter: %d\n", counter);
    }
    value2 = +1;
    printf("%u\n", value2);
    
    
    return 0;
}