#include <stdio.h>
main()
{
    int n1 = 0;
    int n2 = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("\n n1 e n2 sao iguais? %d", n1 == n2);
    printf("\n n1 e maior que n2? %d", n1 > n2);
    printf("\n n1 e menor ou igual a n2? %d", n1 <= n2);
}
