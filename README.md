# Aula 12 - Strings e Manipulação de Strings em C

## Sumário
1. [Strings](#strings)
2. [Exercício 1](#exercício-1)
3. [Exercício 2](#exercício-2)
4. [Exercício 3](#exercício-3)
5. [Exercício 4](#exercício-4)
6. [Exercício 5](#exercício-5)
7. [Exercício 6](#exercício-6)
8. [Exercício 7](#exercício-7)
9. [Biblioteca `<string.h>`](#biblioteca-stringh)

---

## Strings

Vetores podem armazenar qualquer tipo de dado, mas todos os itens devem ser do mesmo tipo. Uma string em C é um vetor de `char` que termina com o caractere nulo (`'\0'`). Por exemplo:

```c
char nome[6] = "Mauro";

printf("Nome: %s\n", nome);
```

Podemos percorrer os caracteres da string utilizando um laço:

```c
for (int i = 0; i < 6; i++) {
  printf("Letra: %c\n", nome[i]);
}
```

Strings podem ser inicializadas com aspas (`"`) ou diretamente com chaves (`{}`):

```c
char nome[6] = { 'M', 'a', 'u', 'r', 'o', '\0' };
```

---

## Exercício 1

Crie um programa em C que imprime o seu nome no seguinte formato:

```
Nome: Fulano

* F * u * l * a * n * o *
```

---

## Exercício 2

Se listarmos todos os números naturais menores que 10 múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23.  
Crie um programa em C que encontre a soma de todos os múltiplos de 3 ou 5 abaixo de um número digitado pelo usuário.

---

## Exercício 3

Crie um programa em C que pede uma senha ao usuário. Se a senha for igual à `"azimo"`, exiba a mensagem `"Seja bem-vindo!"`. Caso contrário, mostre mensagens de erro e limite o usuário a 3 tentativas:

- `"Senha errada. Tentativas restantes: 2"`
- Após 3 erros: `"Tente novamente mais tarde"`

---

## Exercício 4

Crie um programa em C que recebe uma palavra de até 5 letras. Em seguida, receba uma letra e informe se a letra foi encontrada ou não na palavra.  
Permita que o usuário erre até 3 vezes consecutivas.

---

## Exercício 5

Crie um programa em C que verifica se uma senha possui 8 ou mais caracteres. Exiba:

- `"Erro na senha"` se for menor.
- `"Senha conforme"` se for maior ou igual a 8.

---

## Exercício 6

Crie um programa em C que recebe o nome e o sobrenome de uma pessoa e mostra o nome completo em uma única string:

```c
printf("Nome completo: %s\n", completo);
```

---

## Exercício 7

Crie um programa em C que pede uma senha ao usuário. Se a senha for igual à `"azimo"`, exiba a mensagem `"Seja bem-vindo!"`. Caso contrário, mostre mensagens de erro e limite o usuário a 3 tentativas:

- `"Senha errada. Tentativas restantes: 2"`
- Após 3 erros: `"Tente novamente mais tarde"`

---

## Biblioteca `<string.h>`

A biblioteca `<string.h>` em C oferece diversas funções para manipulação de strings.

### Procurar Caractere com `strchr`

A função `strchr()` localiza a primeira ocorrência de um caractere em uma string. Exemplo:

```c
char palavra[] = "Fulano";
char letra = 'l';
char *posicao = strchr(palavra, letra);

if (posicao != NULL) {
  printf("Posicao: %s\n", posicao);
} else {
  printf("Nao encontrada!\n");
}
```

Se o caractere não for encontrado, `strchr()` retorna `NULL`.

---

### Tamanho de String com `strlen`

A função `strlen()` retorna o tamanho de uma string sem contar o caractere nulo (`'\0'`):

```c
char senha[20];
printf("Digite a senha: ");
scanf("%19s", senha);

int tamanho = strlen(senha);
printf("Tamanho: %d\n", tamanho);
```

---

### Concatenar Strings com `strcat`

A função `strcat()` junta (concatena) duas strings. Exemplo:

```c
char destino[20] = "Ola, ";
char origem[] = "Mundo!";

strcat(destino, origem);
printf("%s\n", destino);
```

---

### Comparar Strings com `strcmp`

A função `strcmp()` compara duas strings e retorna:

- `0` se forem iguais,
- Menor que `0` se a primeira preceder a segunda,
- Maior que `0` se a primeira suceder a segunda.

Exemplo:

```c
char primeira[] = "pera";
char segunda[] = "uva";

int resultado = strcmp(primeira, segunda);
printf("Resultado: %d\n", resultado);
```
