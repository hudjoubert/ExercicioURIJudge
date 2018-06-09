#include <stdio.h>
#include <math.h>

double A, B, C;
int main() {
    double delta = 0, x1 = 0, x2 = 0;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    delta = B*B - 4*A*C;
    x1 = (-B + sqrt(delta)) / (2*A);
    x2 = (-B - sqrt(delta)) / (2*A);
    if (delta >= 0 && A != 0) {            
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    } else {
        printf("Impossivel calcular\n");
    }
    return 0;
}
