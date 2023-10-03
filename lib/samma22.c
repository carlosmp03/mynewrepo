#include <stdio.h>
#include <math.h>
#include <limits.h>
int f(int k){
    long int sum = (1-pow(2,k))/(-1), n = 0;
    long int a[k];
    for(int i = 0; i<= k-1){
        a[i] = 2;
    }
    while(sum <= LONG_MAX){
        n+=1;
        for(int i = 1; i <= k; i++){
            sum -= a[i];
            a[i] = pow(2 * i,n);
            if (a[i] > LONG_MAX){
                // ************
            
            }
            sum += a[i];
            
        }
    printf("%ld", sum);
    int sumres = 0;
    for(int i = 0; i<= k-1; i++){
        sumres += pow(2*i, n-1);
    }

    }
}
int main(){
    long int a[100];
    for(int i = 0; i <= 99; i++){
        printf("%d\n", a[i]);
    }
        
    return 0;

}