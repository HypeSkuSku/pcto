#include <stdio.h>


int main()
{
    int x;
    int y;
    int z;

    printf("sparami tre numeri\n");
    scanf("%d %d %d", &y, &x, &z);

    if((x + y > z) && (x + z > y) && (z + y > x))
    {
        printf("i numeri forniti formano un triangolo generico\n");
    if(z!=y && x!=z && y!=x)
    {
        printf("il triangolo è scaleno\n");
    }
    else if(z==y && z==x && y==x)
    {
        printf("il triangolo è equilatero\n");
    }
    else 
    {
        printf("il triangolo è isoscele\n");
    }
    
    }
    else
    {
        printf("i numeri forrniti non corrispondono ad un triangolo\n");
    }
   


}
