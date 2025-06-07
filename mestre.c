#include <stdio.h>

// Função recursiva para a Torre (move para a direita)
void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para a Rainha (move para a esquerda)
void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o Bispo (move diagonal: cima e direita)
// Também imprime os movimentos usando loops aninhados (vertical e horizontal)
void moverBispoRecursivo(int casas) {
    if(casas > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

void moverBispoLoops(int casas) {
    // Loop externo: cada movimento para cima
    for(int v = 1; v <= casas; v++) {
        // Loop interno: cada movimento para a direita junto com o para cima
        for(int h = 1; h <= 1; h++) { // aqui só 1 movimento para direita por "subida"
            printf("Cima Direita\n");
        }
    }
}

// Movimento complexo do Cavalo: duas casas para cima e uma para a direita, usando loops aninhados
void moverCavalo() {
    int i, j;
    printf("Movimento do Cavalo:\n");
    for(i = 1; i <= 2; i++) {         // Duas casas para cima
        printf("Cima\n");
        if(i == 2) {                  // Após duas casas, faz uma para a direita
            for(j = 1; j <= 1; j++) {
                if(j == 1) {
                    printf("Direita\n");
                    break;            // Sai do loop após o movimento em L
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Bispo - recursivo
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Bispo - loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoops(casasBispo);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Cavalo (duas casas para cima, uma para a direita, usando loops aninhados)
    moverCavalo();

    return 0;
}
