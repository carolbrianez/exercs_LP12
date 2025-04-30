// exercicio 3 - aula 12:
// Crie um programa em C que recebe uma senha de um usuário e se a senha for igual à palavra "azimo" mostre a mensagem: "Seja bem vindo!" e se o usuário errar a senha, mostre a mensagem: "Senha errada. Tentativas restantes: 2", se o usuário errar 3 vezes mostra a mensagem: "Tente novamente mais tarde".

#include <stdio.h>

int main() {
  char senha[50];
  char senha_correta[] = "azimo";
  int tentativas = 3;
  int i, senha_correta_tamanho = 0;
  
    while (senha_correta[senha_correta_tamanho] != '\0') {
    senha_correta_tamanho++;
  }

  while (tentativas > 0) {
    printf("Digite a senha: ");
    scanf("%s", senha);

    int senha_igual = 1;
    i = 0;
    while (senha[i] != '\0' || senha_correta[i] != '\0') {
      if (senha[i] != senha_correta[i]) {
        senha_igual = 0;
        break;
      }
      i++;
    }
    
    if (i != senha_correta_tamanho) {
        senha_igual = 0;
    }

    if (senha_igual) {
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
