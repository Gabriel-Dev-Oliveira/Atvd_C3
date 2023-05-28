#include <stdio.h>
int main()
{
    int numeros[10], i, pares;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }
    printf("O vetor possui %d valores pares.\n", pares);
    
    return 0;
}
