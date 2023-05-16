#include <stdio.h>

int main(){
    int i = 1;
    int j = 1;

    while (i <= 9){

        for (j; j <= 10; j++){

            int r = i * j;
            printf("%d x %d = %d \n", i, j, r);}
        j = 1;
        i++;
        printf("\n");}

    return 0;
}
