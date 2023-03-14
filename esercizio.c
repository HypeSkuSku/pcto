#include <stdio.h>

int main()
{
    char sesso;
    printf("qual e il tuo sesso?:");
    scanf(" %c", &sesso);

    if(sesso == 'm')
    {
        printf("sei maschio\n");
    }
    else if(sesso == 'f')
    {
        printf("non hai diritti\n");
    }
    else if(sesso == 'n')
    {
        printf("non so che dirti bro\n");
    }
    else
    {
        printf("errore tu sei un essere strano\n");
    }
}