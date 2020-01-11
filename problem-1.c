#include<stdio.h>
int main(){
    int a,N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&a);
        if(a%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }


return 0;
}
