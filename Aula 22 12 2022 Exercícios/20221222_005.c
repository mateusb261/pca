#include <stdio.h>

int main(){
    float soma;
    int n = 1;
    int d = 1;
    while(n<=99 && d<=50){
        soma+= n/d;
        n+=2;
        d+=1;
    }
    printf("a soma e %f", soma);
    return 0;
}