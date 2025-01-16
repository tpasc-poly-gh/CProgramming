/*
    The intro to variables
*/

#include <stdio.h>


int main() {
    int fnum;
    fnum = 100;

    int snum = -19;

    printf("First num: %d\n", fnum);
    printf("Second num: %d\n", snum);

    int sum = fnum + snum;

    printf("%d + %d = %d\n", fnum, snum, sum);
    return 0;
}