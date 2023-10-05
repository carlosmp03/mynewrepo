#include <stdio.h>
#include <limits.h>
#include <math.h>
int main() {
    int k = 3;
    long int  a[3];
    long int n = 1;
    long int sum = 0;
    for(int i = 0; i<= k-1; i++){
        a[i] = pow(2 * (i+1), n);
        printf("%d\n",a[i]);
        sum += a[i];
    }
    printf("%ld\n", sum);
    for(int i = 0; i <= k-1; i++){
            sum -= a[i];
            a[i] = pow((2 * (i+1)), n+1);
            printf("%ld\n", a[i]);
            sum += a[i];
            //printf("%ld\n", sum);
            }
    printf("%ld", sum);
    return 0;
    
}