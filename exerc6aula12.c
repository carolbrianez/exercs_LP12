// exercicio 6 - aula 12:
// Crie um programa em C que recebe o nome e o sobrenome de uma pessoa e mostra o nome completo usando apenas uma string com o comando: printf("Nome completo: %s\n", completo);

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[50];
    char completo[100];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    sprintf(completo, "%s %s", nome, sobrenome);

    printf("Nome completo: %s\n", completo);

    return 0;
}