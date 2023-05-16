#include <stdio.h>
/* ler salário de uma pessoa e calcular o novo salário considerando que esta pessoa
terá um ajuste de 10%*/
int main (){
    // declara e atribui o valor digitado ao salario
    float salario;
    printf("Digite o valor do salario: ");
    scanf("%f", & salario);
    // declara, calcula e atribui o ajuste de 10% do salario
    float ajuste = salario * 10/100;
    // declara e atribui o valor do novo salario com o ajuste obtido
    float novo_salario = salario + ajuste;
    printf("O novo salario e %.2f", novo_salario);
    return 0;
}
