#include <stdio.h>
#include <math.h>
#include <limits.h>


int main(){
    char ZnakPerepolneniya;
    int check = 1;
    long int k;
    double longmax = 2147483647;
    long int sumres = 0;
    scanf("%ld", &k);
    long int n = 1;
    
    while(1){
        n++;
        long int sum = 0;
        for(int i = 1; i <= k; i++){
            long int a = pow((2 * (i)), n);
            sum += a;
            //if (2 * (i) > pow(longmax, 1/n)){ // (2 * i) ** n > LONG_MAX
            if (a < 0){
                ZnakPerepolneniya = '*';
                check = 0;
                break;
            }
            else if (sum <= 0){
                ZnakPerepolneniya = '+';
                check = 0;
                break;
            }
            //printf("%ld\n", sum);
            }
        if (check == 0){
            break;
        }
    }
    for(int i = 1; i<= k; i++){
        sumres += pow(2*i, n-1);
    }
    printf("%d\n", sumres);
    printf("%d\n", n-1);
    printf("%c\n",ZnakPerepolneniya);
    return 0;
}
