#include <stdio.h>

int main()
{
    int num, raiz, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", & num);
    
    if(num >= 0)
    {
        raiz = sqrt(num);
        printf("A raiz quadrada dele é: %d", raiz);
    }
    else
    {
       quadrado = num * num;
       printf("%d",  quadrado);
    }
}
