#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int count = 0, sum = 0, maxs = 0, maxn = 0, countd = 0, check = 0;
    for (int i = 380; i <= 410; i++) {
        printf("%d  ", i);
        for (int j = 2; j <= ((i / 2) + 1); j++) {
            if (i % j == 0) {
                count += 1;
                sum += j;
                countd += 1;
                check = 0;
                if (countd > 4) {
                    printf("\n");
                    printf("%8d", j);
                    countd = 1;
                    check = 1;
                }
                else if (countd == 1 && check == 0) {
                    printf("%3d", j);
                }
                else if (countd != 1) {
                    printf(",");
                    printf("%3d", j);
                }
                }
                
            }
        if (maxs < sum) {
            maxs = sum;
            maxn = i;
        }
        int schet  = (26 - 7 - countd * 4 );
        while (schet > 0) {
            printf(" ");
            schet--;
        }
        printf("%d\n", sum);
        count = 0;
        sum = 0;
        countd = 0;
    }
    printf("\n%d\n", maxn);
}