#include <stdio.h>
int main()
{
    int x;
    int y;

    printf("digita un numero e io ti dirò se è un numero primo: ");
    scanf("%d", &x);
    y = x;
   if(x == 1)
   {
    printf("primo\n");
   }
   while(y>2)
   {
     y = y - 1;
     if(x % y == 0)
     {
        printf("non primo\n");
        y = 1;
     }
   }
   if( y != 1)
   {
    printf("primo\n");
   }
}