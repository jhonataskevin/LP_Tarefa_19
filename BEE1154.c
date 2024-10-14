#include <stdio.h>
int main(){

    int idade, i=0;
    float media=0;

    do{
        scanf("%d", &idade);
        if (idade>=0)
        {
            media+=idade;
            i++;
        }
    } while (idade>=0);
    printf("%.2f\n", media/i);
    return 0;
}
