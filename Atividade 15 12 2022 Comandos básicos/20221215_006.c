#include <stdio.h>

int main(){
    float salario_por_hora;
    printf("digite quanto voce ganha por hora: ");
    scanf("%f", & salario_por_hora);
    int horas;
    printf("digite numero de horas trabalhadas no mes: ");
    scanf("%i", & horas);
    float total_do_salario_no_mes = salario_por_hora * horas;
    printf("o total do salario no mes e: R$ %.2f", total_do_salario_no_mes);
    return 0;
}
