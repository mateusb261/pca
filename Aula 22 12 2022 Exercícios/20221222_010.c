#include <stdio.h>

int main() {
    int p;
    printf("digite o numero p: ");
    scanf("%d", & p);
    int n = 1;
    int n_ao_cubo;
    int contador_soma_inicial;
    int soma;
    int v_temp;
    int contador_igualdade;
    int contador_soma;
    int contador_fatores;

    while(n<=p) {
        if (n == 1) {
            printf("1*1*1=1 \n");
        }

        else {
            n_ao_cubo = n * n * n;
            contador_soma_inicial = 1;
            soma = 1;
            v_temp = 1;

            while (contador_soma_inicial < n) {
                v_temp += 2;
                soma += v_temp;
                contador_soma_inicial++;

            }

            if (soma == n_ao_cubo) {
                contador_igualdade = 1;
                contador_soma = 1;
                contador_fatores = 1;
                while (contador_igualdade <= 3) {
                    if (contador_igualdade < 3) {
                        printf("%d*", n);
                    }
                    else {
                        printf("%d=", n);
                    }
                    contador_igualdade++;
                }
                v_temp = v_temp - (2 * (n-1));
                while (contador_fatores <= n) {

                    if (contador_fatores < n) {
                        printf("%d+", v_temp);
                    }
                    else {
                        printf("%d\n", v_temp);
                    }
                    v_temp += 2;
                    contador_fatores++;
                }
            }
            else {
                contador_igualdade = 1;
                contador_soma = 1;
                contador_fatores = 1;
                for( ;soma != n_ao_cubo; ) {
                    v_temp = v_temp + 2;
                    soma = soma + v_temp;
                    soma = soma - (v_temp - (2 * (n)));
                }
                while (contador_igualdade <= 3) {
                    if (contador_igualdade < 3) {
                        printf("%d*", n);
                    }
                    else {
                        printf("%d=", n);
                    }
                    contador_igualdade++;
                }
                v_temp = v_temp - (2 * (n-1));
                while (contador_fatores <= n) {

                    if (contador_fatores < n) {
                        printf("%d+", v_temp);
                    }
                    else {
                        printf("%d\n", v_temp);
                    }
                    v_temp += 2;
                    contador_fatores++;
                }
            }
        }
        n++;
    }
    return 0;
}