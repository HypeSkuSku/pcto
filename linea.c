#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("scrivi tre numeri:");
    scanf("%d %d %d", &x, &y, &z);
    
    if((y - x) == (z - y))
    {
        printf("i numeri sono in progresione aritmetica\n");
    }
    else
    {
        printf("i numeri non sono in progressione arimetica");
    }

}