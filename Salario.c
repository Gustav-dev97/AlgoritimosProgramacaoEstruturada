#include <stdio.h> // arquivo de cabeçalho onde se encontra as funções printf e scanf
int main()
{ // função principal

    float salario_min, salario_pessoa, qtd_sal_min; // variaveis do tipo float

    printf("Informe o valor do salario minimo \n R$ "); // entrada de dados
    scanf("%f", &salario_min);                          // Este comando efetua uma leitura do teclado onde é esperada uma variável float (indicada por “%f”). O valor lido será armazenado no endereço da variável salário.

    printf("Informe o valor do salario recebido pela pessoa \n R$ "); // entrada de dados
    scanf("%f", &salario_pessoa);                                     // Este comando efetua uma leitura do teclado onde é esperada uma variável float (indicada por “%f”). O valor lido será armazenado no endereço da variável salário.

    qtd_sal_min = (salario_pessoa / salario_min); // variavel quantidade salario recebe a divisao de salario pessoa por salario minimo

    printf("Uma pessoa que recebe um salario de R$ %.2f reais recebe %.1f salarios minimos \n", salario_pessoa, qtd_sal_min); // o “%f” é utilizado quando os dados numéricos são flutuantes, ou seja, valores fracionados e quando usamos %.2f significa que o valor será arredondado em duas casas decimais, ex.: 2,45.

    return 0; //// se o programa retornar zero, significa que ele terminou normalmente, e, se o programa retornar um valor diferente de zero, significa que o programa teve um término anormal.
