#include<stdio.h>
 int main()
 {
    int A,N,r,c,i;
    scanf("%d",&A);
    for(i = 1;i<=A; i++)
        {
            scanf("%d",&N);
            if(N <= 80)
            {
                for(r = 1; r<=N;r++)
                {
                    for(c = 1;c<=N;c++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
        if(i<A)
		printf("\n");

            }
        }
return 0;
 }
