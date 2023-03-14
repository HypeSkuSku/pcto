#include <stdio.h>

int main()
{
    int x;
    char sesso;

    printf("quanti anni hai?:");
    scanf("%d", &x);
    printf("qual è la tua sessualita?:");
    scanf(" %c", &sesso);
    printf("tu hai %d anni, e sei %c\n", x, sesso);

}