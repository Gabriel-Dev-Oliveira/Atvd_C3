#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", & num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", & num2);
    
    if(num1 > num2)
    {
        int diferenca = num1 % num2;
        printf("O número maior é: %d", num1);
        printf("\nE a diferença é: %d", diferenca);
    }
    else
    {
        int diferenca = num2 % num1;
        printf("O número maior é: %d", num2);
        printf("\nE a diferença é de: %d", diferenca);
    }
}
