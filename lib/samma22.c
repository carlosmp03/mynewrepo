#include <stdio.h>
#include <math.h>
#include <limits.h>


int main(){
    char ZnakPerepolneniya;
    int check = 1;
    long int k;
    long long int longmax = 2147483647;
    long long int sumres = 0;
    scanf("%ld", &k);
    long long int sum = 0, n = 1;
    long long int a[k];
    for(int i = 0; i<= k-1; i++){
        a[i] = pow(2 * (i+1), n);
        sum += a[i];
    }
    
    while(sum <= LONG_MAX){
        n++;
        for(int i = 0; i <= k-1; i++){
            sum -= a[i];
            a[i] = pow((2 * (i+1)), n);
            if (a[i] > LONG_MAX){
                ZnakPerepolneniya = '*';
                check = 0;
                break;
            }
            //printf("%ld\n", a[i]);
            sum += a[i];
            //printf("%ld\n", sum);
            }
        if (check == 0){
            break;
        }
        if (sum  > LONG_MAX){
            ZnakPerepolneniya = '+';
            break;
        }
        
    }
    for(int i = 0; i<= k-1; i++){
        sumres += pow(2*i, n);
    }
    printf("%d\n", sumres);
    printf("%d\n", n);
    printf("%c\n",ZnakPerepolneniya);
    return 0;
}