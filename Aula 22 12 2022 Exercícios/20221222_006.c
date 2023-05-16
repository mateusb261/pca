#include <stdio.h>

int main(){
    int num;
    int divisor = 1;
    int soma = 0;
    printf("digite um numero inteiro e positivo: ");    
    scanf("%d", & num); 
    while(num <= 0){
        printf("erro! digite um numero inteiro e positivo: ");    
        scanf("%d", & num); 
    }
    while(divisor < num){
        int resto = num % divisor;
        if(resto == 0){
            soma+=divisor;
        }
        divisor++;
    }
    if(soma == num){        
        printf("o numero %d e perfeito", num);
        
    }
    else{
        printf("o numero %d nao e perfeito", num);
    }
    return 0;
}