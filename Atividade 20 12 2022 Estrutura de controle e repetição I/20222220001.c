#include <stdio.h>

int main(){
   int counter = 0;
   int temp = 0;
   int soma = 0;
   while (counter < 5){
        printf("digite um numero: ");
        scanf("%i", & temp);
        soma = soma + temp;
        if (counter == 4)
            printf("%i", soma);
        counter++;
   }
   return 0;}
