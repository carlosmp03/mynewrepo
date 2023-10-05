#include <stdio.h>
//#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double S = 0.0;
    double znam;
    double cor = 0.0, Scor = 0.0, fcor = 0.0, f = 0.0;
    for (int i = 1; i <= n; i++){
        znam = (4.0 * (double)i * (double)i - 1.0);
        f = 1/znam;
        fcor = f - cor;
        Scor = S + fcor;
        cor = (Scor - S) - fcor;
        S = Scor;
        S += f;
        
    }
    printf("%.8lf", Scor);
    return 0;
}
