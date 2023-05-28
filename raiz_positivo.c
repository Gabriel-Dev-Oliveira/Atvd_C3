#include <stdio.h>

int main()
{
    int num, raiz, quadrado;
    
    printf("Digite um número: ");
    scanf("%d", & num);
    
    raiz = sqrt(num);
    quadrado = num * num;
    
    if(num > 0)
    {
        printf("O número %d ao quadrado é: %d", num, quadrado);
        printf("\nA raiz do número %d é: %d", num, raiz);
    }else{
        printf("Não é um número positivo");
    }
}
