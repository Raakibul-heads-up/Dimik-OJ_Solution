#include<stdio.h>
int main(){
    int i;
    for(i=1000;i>=1;i--){
         for(int j=1;j<=i;j++){
            printf("%d\t",j);
         }
         printf("\n");
    }

return 0;
}
