#include <stdio.h>

int main(){
    float nota1=0, nota2=0, nota3=0, maior_nota1=0, maior_nota2=0, maior_nota3=0, menor_nota1=0, menor_nota2=0, menor_nota3=0, media=0, maior_media=0, menor_media=0;
    int contador_unico = 1;
    int condicao = 1;

    while(condicao == 1){
            
        printf("digite as tres notas do aluno: ");
        scanf("%f", & nota1);
        scanf("%f", & nota2);
        scanf("%f", & nota3);
        media = (nota1 + nota2 + nota3)/3;

        if(contador_unico == 1){


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
        printf("Deseja inserir as notas de outro aluno? Digite '1' (sim) para continuar ou '0' (não) para parar: ");
        scanf("%d", & condicao);
        contador_unico++;
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