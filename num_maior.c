#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", & num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", & num2);
    
    if(num1>num2){
        printf("O número %d é o maior entre os dois", num1);
    }else{
        printf("O número %d é o maior entre os dois", num2);
    }
}
