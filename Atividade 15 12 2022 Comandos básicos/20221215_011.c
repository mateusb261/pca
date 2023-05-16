#include <stdio.h>

int main(){
    float salario_por_hora;
    printf("digite quanto voce ganha por hora: ");
    scanf("%f", & salario_por_hora);
    int horas;
    printf("digite numero de horas trabalhadas no mes: ");
    scanf("%i", & horas);
    float total_do_salario_no_mes = salario_por_hora * horas;
    float IR = total_do_salario_no_mes * 11/100;
    float INSS = total_do_salario_no_mes * 8/100;
    float sindicato = total_do_salario_no_mes * 5/100;
    float salario_liquido = total_do_salario_no_mes - (IR + INSS + sindicato);
    printf("a quantia paga ao INSS foi de: R$ %.2f \n", INSS);
    printf("a quantia paga ao sindicato foi de: R$ %.2f \n", sindicato);
    printf("o salario liquido e de: R$ %.2f", salario_liquido);
    return 0;
}
