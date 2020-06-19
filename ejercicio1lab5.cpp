#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
   printf("\n  PROGRAMA DEL TEOREMA DE EUCLIDES\n\n");
    printf("\n\n  Por favor, introduzca su Dividendo:  ");
    int a;
    scanf (" %d", &a);
    printf("\n  Ahora, introduzca el Divisor:  ");
    int b;
    scanf (" %d", &b);
    int Resto = a%b;
    if(Resto == 0){
       printf("\n\n  El MCD es %d", b);
       }
    while(!Resto == 0)
    {
     a = b;
     b = Resto;
     Resto = a%b;
     if(a%b == 0){
        printf("\n\n  El MCD es %d", b);
        break;
     }
    }
 return 0;
}