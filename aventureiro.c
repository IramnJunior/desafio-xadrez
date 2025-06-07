#include <stdio.h>

int main() {
    int i;

    // Torre: anda 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Bispo: anda 5 casas na diagonal para cima e direita (while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Rainha: anda 8 casas para a esquerda (do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);

    // Cavalo: 2 casas para baixo e 1 para a esquerda, usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    int j = 0;

    // Loop for para as 2 casas para baixo
    for(i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // Loop while para a casa para a esquerda (aninhado após o for)
    while(j < 1) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
