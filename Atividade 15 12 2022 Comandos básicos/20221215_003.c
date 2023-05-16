#include <stdio.h>

int main(){
    float metros, centimetros;
    printf("digite o valor de metros: ");
    scanf("%f", & metros);
    centimetros = metros * 100;
    printf("%.2f metros e igual a %.2f centimetros", metros, centimetros);
    return 0;
}
