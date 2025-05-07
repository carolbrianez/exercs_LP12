// exercicio 3 - aula 12:
// Crie um programa em C que recebe uma senha de um usuário e se a senha for igual à palavra "azimo" mostre a mensagem: "Seja bem vindo!" e se o usuário errar a senha, mostre a mensagem: "Senha errada. Tentativas restantes: 2", se o usuário errar 3 vezes mostra a mensagem: "Tente novamente mais tarde".

#include <stdio.h>

int main() {
  char senha[50];
  int tentativas = 3;
  int i, igual;

  while (tentativas > 0) {
    printf("Digite a senha: ");
    scanf("%s", senha);

    igual = 1;
    for (i = 0; senha[i] != '\0' && "azimo"[i] != '\0'; i++) {
      if (senha[i] != "azimo"[i]) {
        igual = 0;
        break;
      }
    }

    if (senha[i] != "azimo"[i]) {
      igual = 0;
    }

    if (igual) {
      printf("Seja bem vindo!\n");
      return 0;
    } else {
      tentativas--;
      if (tentativas > 0) {
        printf("Senha errada. Tentativas restantes: %d\n", tentativas);
      } else {
        printf("Tente novamente mais tarde\n");
      }
    }
  }

  return 0;
}
