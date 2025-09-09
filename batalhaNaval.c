#include <stdio.h>

int main() {
    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0};

    // Definição do navio vertical

     int x_vertical = 2;  // coluna
    int y_vertical = 3;  // linha inicial
    int tamanho_vertical = 3;

    // Definição do navio horizontal 

   int x_horizontal = 5; // linha
    int y_horizontal = 6; // coluna inicial
    int tamanho_horizontal = 4;

      printf("=== Posicionamento dos Navios ===\n");

    // Posiciona e mostra o navio vertical
    printf("\nNavio Vertical (tamanho %d):\n", tamanho_vertical);
    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[y_vertical + i][x_vertical] = 1;
        printf("Coordenada: (%d, %d)\n", x_vertical, y_vertical + i);
    }

     // Posiciona e mostra o navio horizontal
    printf("\nNavio Horizontal (tamanho %d):\n", tamanho_horizontal);
    for (int i = 0; i < tamanho_horizontal; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = 1;
        printf("Coordenada: (%d, %d)\n", y_horizontal + i, x_horizontal);
    }

    return 0;
}



