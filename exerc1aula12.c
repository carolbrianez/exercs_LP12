// exercicio 1 - aula 12:
// Crie um programa em C que imprime seu nome assim: Nome: Fulano - * F * u * l * a * n * o *

#include <stdio.h>


int main() {
  char nome[] = "Carol";


  printf("Nome: %s\n", nome);

    printf("* ");
  
  for (int i = 0; i < 5; i++) {
    printf("%c * ", nome[i]);
  }
  printf("\n");

  return 0;
}