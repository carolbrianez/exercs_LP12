// exercicio 7 - aula 12:
// Crie um programa em C que recebe uma senha de um usuário e se a senha for igual à palavra "azimo" mostre a mensagem: "Seja bem vindo!" e se o usuário errar a senha, mostre a mensagem: "Senha errada. Tentativas restantes: 2", se o usuário errar 3 vezes mostra a mensagem: "Tente novamente mais tarde".

#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    int tentativas = 0;

    printf("Digite a senha: ");
    scanf("%s", senha); 

    while (strcmp(senha, "azimo") != 0) {
        tentativas++;
        printf("Senha errada. Tentativas restantes: %d\n", 3 - tentativas);
        if (tentativas == 3) {
            printf("Tente novamente mais tarde.\n");
            break;
        }
        printf("Digite a senha: ");
        scanf("%s", senha);
    }

    if (strcmp(senha, "azimo") == 0) {
        printf("Seja bem vindo!\n");
    }

    return 0;
}
