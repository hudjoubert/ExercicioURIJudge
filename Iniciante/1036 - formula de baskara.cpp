/* 
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem 
correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
 Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, 
 com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha 
 após cada mensagem.
 */
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
