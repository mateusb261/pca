#include <stdio.h>

int main(){
        float m_inicial;
        printf("digite a massa inicial em gramas: ");
        scanf("%f", & m_inicial);
        float m_final = m_inicial;
        int horas = 0;
        int minutos = 0;
        int segundos = 0;

        while(m_final >= 0.5){

            m_final/=2;
            segundos+=50;
        }
        horas = segundos / 3600;
        minutos = (segundos % 3600) / 60;
        segundos = (segundos % 3600) % 60;
        printf("a massa inicial e %.2fg \n", m_inicial);
        printf("a massa final e %.2fg \n", m_final);
        printf("o tempo total e de %d horas, %d minutos e %d segundos", horas, minutos, segundos);
        return 0;
}