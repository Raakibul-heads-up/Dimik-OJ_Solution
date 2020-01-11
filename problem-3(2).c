#include<stdio.h>
int main()
{
int i,N =1000;
    for(i=N ; i>=1; i--)
    {
        printf("%d\t",i);
        if (i%5 == 1 )
        printf("\n");
    }
}
