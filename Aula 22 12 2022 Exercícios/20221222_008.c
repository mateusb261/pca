#include <stdio.h>

int main() {
    int n;
    printf("digite o valor de n: ");
    scanf("%d", & n);
    int hipotenusa = 2;
    int cateto_1 = 1;
    int cateto_2 = 1;
    int soma_catetos = (cateto_1 * cateto_1) + (cateto_2 * cateto_2);
    int hipotenusa_quadrado = hipotenusa * hipotenusa;

    while (hipotenusa <= n) {
        while (soma_catetos <= hipotenusa_quadrado) {
            if(hipotenusa_quadrado == soma_catetos) {
                printf("o valor da hipotenusa e %d, e os catetos, %d e %d \n", hipotenusa, cateto_1, cateto_2);
                hipotenusa++;
                cateto_1 = 1;
                cateto_2 = 1;
                break;
            }
            cateto_2++;
            soma_catetos = (cateto_1 * cateto_1) + (cateto_2 * cateto_2);
        }
        cateto_2 = 1;
        if (hipotenusa_quadrado == soma_catetos) {
            cateto_1 = 1;
            hipotenusa++;
            hipotenusa_quadrado = hipotenusa * hipotenusa;
            soma_catetos = (cateto_1 * cateto_1) + (cateto_2 * cateto_2);
        }
        else {
            cateto_1++;
            soma_catetos = (cateto_1 * cateto_1) + (cateto_2 * cateto_2);
            if(soma_catetos > hipotenusa_quadrado) {
                hipotenusa++;
                hipotenusa_quadrado = hipotenusa * hipotenusa;
                cateto_1 = 1;
                soma_catetos = (cateto_1 * cateto_1) + (cateto_2 * cateto_2);
            }
        }
    }
    return 0;
}