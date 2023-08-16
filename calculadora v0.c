#include <stdio.h>
#include <ctype.h>
#include <windows.h>
//calculadora

float add(float N1)
    {
        float N2 = 0, Res;
        printf("Nm:  ");
        scanf("%f", &N2);
        Res = N1 + N2;
        return Res;
    }

float subtract(float N1)
    {
        float N2 = 0, Res;
        printf("Nm:  ");
        scanf("%f", &N2);
        Res = N1 - N2;
        return Res;
    }

float multiply(float N1)
    {
        float N2 = 0, Res;
        printf("Nm:  ");
        scanf("%f", &N2);
        Res = N1 * N2;
        return Res;
    }

float divide(float N1)
    {
        float N2 = 0, Res;
        printf("Nm:  ");
        scanf("%f", &N2);
        Res = N1 / N2;
        return Res;
    }

int main()
    {
        float Nm1 = 0;
        char OP;
        printf("Calculadora\n");
        printf("Como usar:\n1- Digite um num e então pressione (Enter).\n");
        printf("2- Selecione uma operação a ser realizada e pressione (Enter)\n");
        printf("3- Repita o processo o quanto desejar.\n");
        printf("4- apos ter digitado o ultimo num e pressionado (Enter), Pressione (=) em 'OP:' para ver o resultado final.\n");
        printf("5- para comecar uma nova conta, pressione 'r' em 'OP:'.\n");
        printf("6- Para sair, pressione (q) em 'OP:\n'");

        printf("\nAjuda: adicao(+), subtracao(-), multiplicacao(*), divisao(/), Resultado(=), Resetar(r), Sair(q).\n\n");

        printf("Nm:  ");
        scanf("%f", &Nm1);
        do
            {
            printf("OP:  ");
            fflush(stdin);
            scanf("%c", &OP);
            OP = toupper(OP);
            if (OP == '=')
                printf("R :  %.2f\n", Nm1);

                else if (OP == '+')
                    Nm1 = add(Nm1);

                else if (OP == '-')
                    Nm1 = subtract(Nm1);

                else if (OP == '*')
                    Nm1 = multiply(Nm1);

                else if (OP == '/')
                    Nm1 = divide(Nm1);

                else if (OP == 'R')
                {
                Nm1 = 0;
                system("cls");
                printf("Nm:  ");
                scanf("%f", &Nm1);
                }
                
            } while (OP != 'Q');

        return 0;

    }
    