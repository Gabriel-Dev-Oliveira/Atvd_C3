#include <stdio.h>
int main()
{
    //while
    int i = 0;
    while(i< 101)
    {
        printf("\n%d", i);
        ++i;
    }
    // do while
    do
    {
        printf("\n%d", i);
        ++i;
    }
    while( i<101);
    //for 
    int j;
    for(j=0 ;j< 101; j++)
    {
        printf("\n%d", j);
    }
    return 0;
}
