#include <stdio.h>

int main()
{
    int x;
    printf("quanti hanni ha?:");
    scanf("%d", &x);
    
    if (x > 18)
    {
        printf("lei è maggiorenne, non vai in galera\n");
    }
    else 
    {
        printf("brooo.. è minorenne\n");
    }
}