#include <stdio.h>

int main(void) {
  char jogador1[12], jogador2[12]; // nome dos jogadores

  short int linha, coluna;

  //   col1  col2  col3
  char l1c1, l1c2, l1c3; // linha 1
  char l2c1, l2c2, l2c3; // linha 2
  char l3c1, l3c2, l3c3; // linha 3

  l1c1 = l1c2 = l1c3 = ' '; // padronização linha 1
  l2c1 = l2c2 = l2c3 = ' '; // padronização linha 2
  l3c1 = l3c2 = l3c3 = ' '; // padronização linha 3

  // representação visual inicial da estrutura do jogo da velha
  //        col1 col2 col3
  printf("   1   2   3\n");
  printf("1  %c | %c | %c\n", l1c1, l1c2, l1c3); // linha 1
  printf("  ---+---+---\n");
  printf("2  %c | %c | %c\n", l2c1, l2c2, l2c3); // linha 2
  printf("  ---+---+---\n");
  printf("3  %c | %c | %c\n\n", l3c1, l3c2, l3c3); // linha 3

  for (int i = 0; i < 3; i++) {
    printf("Escolha onde deseja fazer sua jogada...\n");
    printf("Digite o número da linha: ");
    scanf("%hd", &linha);
    printf("Digite o número da coluna: ");
    scanf("%hd", &coluna);

    if (linha == 1) {
      switch (coluna) {
        case 1: l1c1 = 'O'; break;
        case 2: l1c2 = 'O'; break;
        case 3: l1c3 = 'O'; break;
      }
    } else if (linha == 2) {
      switch (coluna) {
        case 1: l2c1 = 'O'; break;
        case 2: l2c2 = 'O'; break;
        case 3: l2c3 = 'O'; break;
      }
    } else {
      switch (coluna) {
        case 1: l3c1 = 'O'; break;
        case 2: l3c2 = 'O'; break;
        case 3: l3c3 = 'O'; break;
      }
    }

    //        col1 col2 col3
    printf("   1   2   3\n");
    printf("1  %c | %c | %c\n", l1c1, l1c2, l1c3); // linha 1
    printf("  ---+---+---\n");
    printf("2  %c | %c | %c\n", l2c1, l2c2, l2c3); // linha 2
    printf("  ---+---+---\n");
    printf("3  %c | %c | %c\n\n", l3c1, l3c2, l3c3); // linha 3

    if (l1c1 == l2c2) {
      if (l1c1 == l3c3) {
        printf("\nVocê foi o campeão!!!!!");
      }
    }
  }

  return 0;
}