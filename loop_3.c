#include <stdio.h>
int main()
{
    int num = 1;
    int i;
    printf("Os cinco primeiros números multiplos por 3 são: ");
    
        while ( i < 5)
        {
            if (num % 3 == 0)
            {
                printf("%d ", num);
                i++;
            }
            num++;
        }
    return 0;
}
