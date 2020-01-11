#include<stdio.h>
int main(){
    int N,i,a;
    scanf("%d",&N);


    for(i=1;i<=N;i++){
        scanf("%d",&a);
        printf("Case %d:",i);
        for(int j=1;j<=a;j++){
            if(a%j==0){
                printf(" %d",j);
            }
        }
        printf("\n");
    }

return 0;
}
