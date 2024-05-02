#include <stdio.h>

int main(void) {
  char jogador1[12], jogador2[12]; // nome dos jogadores

  //   col1  col2  col3
  char l1c1, l1c2, l1c3; // linha 1
  char l2c1, l2c2, l2c3; // linha 2
  char l3c1, l3c2, l3c3; // linha 3

  l1c1 = l1c2 = l1c3 = ' '; // padronização linha 1
  l2c1 = l2c2 = l2c3 = ' '; // padronização linha 2
  l3c1 = l3c2 = l3c3 = ' '; // padronização linha 3

  // representação visual inicial da estrutura do jogo da velha
  //      col1 col2 col3
  printf(" %c | %c | %c\n", l1c1, l1c2, l1c3); // linha 1
  printf("---+---+---\n");
  printf(" %c | %c | %c\n", l2c1, l2c2, l2c3); // linha 2
  printf("---+---+---\n");
  printf(" %c | %c | %c", l3c1, l3c2, l3c3); // linha 3

  
  
  return 0;
}