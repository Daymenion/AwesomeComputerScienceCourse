#include <stdio.h>

int main() {
    /*
    write a program that prints the count of the each coins and total coins number. Coins are: 1, 5, 10, 25 cents.
    Think greedily and try to give the change as few coins as possible.
    */
    int count1 = 0, count5 = 0, count10 = 0, count25 = 0, total = 0;
    float reel_change = 0;
    do
    {
        printf("Enter change (Precise up to 2 digits after comma): ");
        scanf("%f", &reel_change);
    } while (reel_change <= 0);

    int change = reel_change * 100;
    while (change > 0) {
        if (change >= 25) {
            change -= 25;
            count25++;
        } else if (change >= 10) {
            change -= 10;
            count10++;
        } else if (change >= 5) {
            change -= 5;
            count5++;
        } else if (change >= 1) {
            change -= 1;
            count1++;
        }
    }
    total = count1 + count5 + count10 + count25;
    printf("1 cent count: %d  \n5 cent count: %d  \n10 cent count: %d  \n25 cent count: %d  \ntotal coins count: %d\n", count1, count5, count10, count25, total);

    return 0;
}