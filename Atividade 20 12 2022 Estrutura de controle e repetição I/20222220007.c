#include <stdio.h>

int main(){
    int num_de_alunos = 0;
    float nota1=0, nota2=0, nota3=0, maior_nota1=0, maior_nota2=0, maior_nota3=0, menor_nota1=0, menor_nota2=0, menor_nota3=0, media=0, maior_media=0, menor_media=0;
    int contador = 1;

    printf("digite o numero de alunos: ");
    scanf("%d", & num_de_alunos);
    printf("\n");

    for(contador; contador<=num_de_alunos; contador++){

        printf("digite a primeira nota do aluno \n: ");
        scanf("%f", & nota1);
        printf("digite a segunda nota do aluno \n: ");
        scanf("%f", & nota2);
        printf("digite a terceira nota do aluno \n: ");
        scanf("%f", & nota3);

        media = (nota1 + nota2 + nota3)/3;

        if(contador == 1){

            maior_nota1 = nota1;
            maior_nota2 = nota2;
            maior_nota3 = nota3;
            menor_nota1 = nota1;
            menor_nota2 = nota2;
            menor_nota3 = nota3;
            maior_media = media;
            menor_media = media;
        }

        else{

            maior_nota1 = nota1 > maior_nota1 ? nota1 : maior_nota1;
            maior_nota2 = nota2 > maior_nota2 ? nota2 : maior_nota2;
            maior_nota3 = nota3 > maior_nota3 ? nota3 : maior_nota3;
            menor_nota1 = nota1 < menor_nota1 ? nota1 : menor_nota1;
            menor_nota2 = nota2 < menor_nota2 ? nota2 : menor_nota2;
            menor_nota3 = nota3 < menor_nota3 ? nota3 : menor_nota3;
            maior_media = media > maior_media ? media : maior_media;
            menor_media = media < menor_media ? media : menor_media;
        }
    }
    printf("a maior nota do exercicio 1 foi: %.2f \n", maior_nota1);
    printf("a maior nota do exercicio 2 foi: %.2f \n", maior_nota2);
    printf("a maior nota do exercicio 3 foi: %.2f \n", maior_nota3);

    printf("\n");

    printf("a menor nota do exercicio 1 foi: %.2f \n", menor_nota1);
    printf("a menor nota do exercicio 2 foi: %.2f \n", menor_nota2);
    printf("a menor nota do exercicio 3 foi: %.2f \n", menor_nota3);
    printf("\n");

    printf("a maior media foi: %.2f \n", maior_media);
    printf("a menor media foi: %.2f \n", menor_media);
    return 0;
}
