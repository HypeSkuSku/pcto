#include <stdio.h>
int main()
{
    
    char stringa[] = "";

    printf("uente inserisci una stringa: ");

    scanf(" %s", stringa);
    int i = 0;


    while ( stringa[i] != '\0')
    {
        i++;
    }

    while(i >= 0)
    {
        printf("%c", stringa[i]);
        i--;
    }
}