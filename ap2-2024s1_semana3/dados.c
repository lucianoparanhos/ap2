#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear_dados() {
    int num;
    num = rand() % 6 + 1;
    printf("Valor do dado: %d\n", num);
    return num;
}

void craps() {
    srand(time(NULL));
    printf("Boa noite!!!\n");
    int dado1 = sortear_dados();
    printf("dado1 = %d\n", dado1);
    int dado2 = sortear_dados();
    printf("dado2 = %d\n", dado2);

    if (dado1 + dado2 == 7){
        printf("Você venceu!\n");
    } else {
        printf("Não foi dessa vez!\n");
    }
}