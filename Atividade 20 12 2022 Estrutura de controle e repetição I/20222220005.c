#include <stdio.h>

int main(){
    int contador = 0;
    int temp = 0;
    int num_maior = 0;
    int num_menor = 0;

    while(contador<20){

        printf("digite um numero: ");
        scanf("%d", & temp);

        if(!(temp<0)){

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

        contador++;
        }
        else{

            printf("digite outro numero que nao seja negativo: ");
        }

    }
    printf("%d foi o maior valor fornecido \n", num_maior);
    printf("%d foi o menor valor fornecido", num_menor);
    return 0;
}
