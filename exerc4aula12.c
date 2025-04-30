// exercicio 4 - aula 12;
// Crie um programa em C que recebe uma palavra de até 5 letras. Receba em seguida uma letra e informe se a letra foi encontrada ou não na palavra. Até que o usuário erre 3 vezes.

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6];
    char letra;
    int erros = 0;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%s", palavra);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("\n");
    
    while (erros < 3) {
        if (strchr(palavra, letra) != NULL) {
            printf("A letra '%c' foi encontrada na palavra.\n", letra);
            break;
        } else {
            erros++;
            printf("A letra '%c' não foi encontrada na palavra.\n", letra);
            if (erros < 3) {
                printf("Digite outra letra: ");
                scanf(" %c", &letra);
                printf("\n");
            }
        }
    }
    if (erros == 3) {
        printf("Você errou 3 vezes. O programa será encerrado.\n");
    }
    return 0;
}
