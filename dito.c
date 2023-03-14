#include <stdio.h>

int main()
{
    int anno;

    printf("la prego proceda inserendo un'annata: ");
    scanf("%d", &anno);

    if((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
    {
       printf("è bisesile\n");
    }
        

    else 
    {
        printf("non è bisestile\n");
    }
}