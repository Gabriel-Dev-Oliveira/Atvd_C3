#include <stdio.h>
int main()
{
    int contagem[10];
    int num, soma = 0;

    printf("Digite 10 números:\n");

    for (num = 0; num < 10; num++) {
        printf("Valor %d: ", num + 1);
        scanf("%d", &contagem[num]);
        soma += contagem[num];
    }

    printf("A soma dos valores é: %d\n", soma);
    return 0;
}
