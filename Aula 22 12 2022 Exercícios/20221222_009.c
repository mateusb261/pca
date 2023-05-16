#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;
    int m;
    int n;
    int x_max = x;
    int y_max = y;
    printf("digite um valor positivo para m: ");
    scanf("%d", & m);

    while(m <=0){
        printf("Valor invalido. Digite um valor positivo para m: ");
        scanf("%d", & m);
    }

    printf("digite um valor positivo para n: ");
    scanf("%d", & n);

    while(n <=0){
        printf("Valor invalido. Digite um valor positivo para n: ");
        scanf("%d", & n);
    }

    int expressao = (x * y) - (x * x) + y;
    int valor_maximo = expressao;

    for(x; x<m; x++){

        if(y = n){
            y = 0;
        }

        for(y; y<n; y++){

            expressao = (x * y) - (x * x) + y;

            if(expressao > valor_maximo){
                valor_maximo = expressao;
                x_max = x;
                y_max = y;
            }
        }

    }
    printf("o valor maximo de x e: %d \n", x_max);
    printf("o valor maximo de y e: %d", y_max);
    return 0;
}