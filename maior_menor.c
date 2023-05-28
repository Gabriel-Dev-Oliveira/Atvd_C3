#include <stdio.h>
int main()
{
    int i, numMaior,numMenor, numeros[10];
    printf("Digite 10 números.\n");

    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    numMaior = numeros[0];
    numMenor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > numMaior) {
            numMaior = numeros[i];
        }

        if (numeros[i] < numMenor) {
            numMenor = numeros[i];
        }
    }
    printf("O maior elemento do vetor é: %d e o menor é o : %d", numMaior, numMenor);
    return 0;
}
