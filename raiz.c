#include <stdio.h>

int main()
{
    int num, raiz, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", & num);
    
    if(num >= 0)
    {
        raiz = sqrt(num);
        printf("A raiz quadrada do %d é: %d",num, raiz);
    }
    else
    {
       quadrado = -(num * num);
       printf("O número %d elevedo ao quadrado é %d",num,quadrado);
    }
}
