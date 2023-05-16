#include <stdio.h>

int main(){
    int contador;
    int temp = 0;
    int num_maior = 0;
    int num_menor = 0;

    for (contador=0; contador<20; contador++){

        printf("digite um numero: ");
        scanf("%d", & temp);

        if (contador == 0){

            num_maior = temp;
            num_menor = temp;
        }

        else{

            if(temp < num_menor){
                num_menor = temp;
            }
            else{
                if(temp > num_maior){
                    num_maior = temp;
                }
            }
        }
    }
    printf("%d foi o maior valor fornecido \n", num_maior);
    printf("%d foi o menor valor fornecido", num_menor);
    return 0;
}
