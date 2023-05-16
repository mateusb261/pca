#include <stdio.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", & num);
    
    if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0){
        printf("o numero %d e primo", num);
    }
   else{
        printf("o numero %d nao e primo", num);
    } 
    return 0;
}