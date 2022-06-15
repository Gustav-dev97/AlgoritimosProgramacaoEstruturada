#include <stdio.h>                             // essa biblioteca é responsável pelas funções de entradas e saídas, como é o caso da função printf e scanf.
#include <stdlib.h>                            // essa biblioteca transforma as strings (vetores de caracteres) em números.
#include <conio.h>                             // é para desenhar tela, e é para dos/windows
#include <math.h>                              // permite usar funções matemáticas básicas, tais como senos, cossenos, exponenciais, logarítmos, etc
int main()                                     // Quando usamos a int antes de main () significa que retornará um número do tipo inteiro. O programa é inicializado pela função (main).
{                                              // “{“ (chave aberta) indica o início de uma função em C
    char nome[30], endereco[30], telefone[15]; // variaveis nome, endereço e telefone, do tipo char, de tamanho 30,30 e 15
    printf("Informe seu nome: ");              // Entrada de dados
    gets(nome);                                // A função gets lê uma linha do fluxo de entrada padrão e a armazena
    printf("Informe seu endereco: ");          // Entrada de dados
    gets(endereco);                            // A função gets lê uma linha do fluxo de entrada padrão e a armazena
    printf("Informe seu telefone: ");          // Entrada de dados
    gets(telefone);                            // A função gets lê uma linha do fluxo de entrada padrão e a armazena
    printf("\n\nNome: %s\n\n", nome);          // imprime a variavel nome, "%s" efetua-se a escrita de uma série de caracteres.
    printf("Endereco: %s\n\n", endereco);      // imprime a variavel endereço, "%s" efetua-se a escrita de uma série de caracteres.
    printf("Telefone: %s\n\n", telefone);      // imprime a variavel telefone, "%s" efetua-se a escrita de uma série de caracteres.
    system("PAUSE");                           // é um comando necessário no ambiente Windows para pausar a tela. Caso contrário a tela fecharia tão rapidamente que não poderíamos
    return 0;                                  // se o programa retornar zero, significa que ele terminou normalmente, e, se o programa retornar um valor diferente de zero, significa que o programa teve um término anormal.
}                                              //  “}” (chave fechada) indica o término das funções e do programa
