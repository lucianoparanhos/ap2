#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativa = 0;

    srand(time(NULL));

    numero_secreto = rand() % 100 + 1;
    printf("- - - - - Exercicio 01 - - - - -\n");
    printf("Adivinhe o número entre 1 e 100:\n");

    do {
        printf("Qual o seu Palpite: ");

        scanf("%d", &palpite);
        tentativa++;

        if (palpite < 1 || palpite > 100) {
            printf("Valor inválido. Tente novamente:\n");
            tentativa--;
        }
        else if (palpite > numero_secreto) {
            printf("Você chutou muito alto! O valor correto é %d.\n", numero_secreto);
        
        }
        else if (palpite < numero_secreto) {
            printf("Você chutou muito baixo! O valor correto é %d.\n", numero_secreto);
        
        }
        else {
            printf("Parabéns!!! Você acertou!\n");
        }
    } while (palpite != numero_secreto);

    printf("Número de tentativas: %d\n", tentativa);
    return 0;
}
