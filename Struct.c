#include <stdio.h>
#include <stdlib.h>
struct Data
{
    int Dia, Ano;
    char Mes[20];
};
main()
{
    struct Data d1 = {04, 2022, "Maio"};
    printf("Data de hoje:");
    printf("%d/%s", d1.Dia, d1.Mes);
    printf("/%d\n", d1.Ano);
    system("pause");
}
