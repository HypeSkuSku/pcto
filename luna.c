#include <stdio.h>

int main()
{
    int x;
    printf("quando sei nato?:");
    scanf("%d", &x);
int y = (1969-x);
int z = (x-1969);

    if(x == 1969)
    {
        printf("lo stesso anno della luna bravo\n");

   
    }
    else if ( x<1969 )
    {
        printf("non sei il predestinato mi dispiace, sei nato %d anni prima dello sbarco sulla luna\n", y);

    }
    else
    {
        printf("non sei il predestinato mi dispiace sei nato %d anni dopo lo sbarco sulla luna\n", z);
    }
}