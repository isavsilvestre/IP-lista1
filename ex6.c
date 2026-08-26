#include <stdio.h>

int main()
{
    int matricula;
    double np1, np2, np3, np4, np5, np6, np7, np8;
    double nl1, nl2, nl3, nl4, nl5;
    double MP, ML, NT, NF;
    int horas;

    while (1)
    {
        scanf("%d", &matricula);

        if (matricula == -1) break;

        scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", 
        &np1, &np2, &np3, &np4, &np5, &np6, &np7, &np8, 
        &nl1, &nl2, &nl3, &nl4, &nl5, &NT,
        &horas);

        MP = (np1 + np2 + np3 + np4 + np5 + np6 + np7 + np8)/8;
        ML = (nl1 + nl2 + nl3 + nl4 + nl5)/5;


        NF = 0.7*MP + 0.15*ML + 0.15*NT ;

        if(NF>=6 && horas>=96)
            {
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, NF);
            }

        if(NF>=6 && horas<96)
            {
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
            }

        if(NF<6 && horas<96)
            {
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
            }

        if(NF<6 && horas>=96)
            {
                printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
            }
        }
        

    return 0;
}

