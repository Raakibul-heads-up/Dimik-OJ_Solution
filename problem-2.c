#include<stdio.h>
#include<stdio.h>
int main(){
    int N,i;
    char s[101];

    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",s);
        int len = strlen(s);
        char last_c = s[len-1];
        int last_number = last_c - '0';

        if(last_number %2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }


return 0;
}
