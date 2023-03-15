#include <stdio.h>
int main()
{
    float x=0;
    float y=0;
    float z;
    float d=0;

    
    
    while(x>=0)
    {
        printf("metti un numero:");
         scanf("%f", &x);
        
        d = d + 1 ; 
        y = x + y;
        z = (y)/d;
        
       
        if(x > 0 && y > 0)
        {
             printf("la media è: %f", z);
        }
        else
        {
            printf("errore\n");
        }
      
    }
}