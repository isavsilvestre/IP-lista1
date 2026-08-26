#include <stdio.h>

int main()
 {
    int i;
    int numero_de_jogos;
    int numero_de_ingressos;
    double qtdP, qtdG, qtdA, qtdC;
    double RENDA;

    scanf ("%d", &numero_de_jogos);

    for (i=0; i < numero_de_jogos; i++)
{
    scanf("%d %lf %lf %lf %lf", &numero_de_ingressos, &qtdP, &qtdG, &qtdA, &qtdC);RENDA = (numero_de_ingressos*qtdP)/100 + ((numero_de_ingressos*qtdG)/100)*5 + ((numero_de_ingressos*qtdA)/100)*10 + ((numero_de_ingressos*qtdC)/100)*20;
    RENDA = (numero_de_ingressos*qtdP)/100 + ((numero_de_ingressos*qtdG)/100)*5 + ((numero_de_ingressos*qtdA)/100)*10 + ((numero_de_ingressos*qtdC)/100)*20;
    printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, RENDA);

}
    return 0;
}
