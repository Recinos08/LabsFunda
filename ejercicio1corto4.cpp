#include "stdio.h"
#include "iostream"

using namespace std;

int main(void){

char palabra[30];

char* murcielago = "murcielago";

char* codigo = "0123456789";

int x=0,j;
printf("\n");
printf("\n");
printf("Este programa nos servira para pasar una palabra que ingresemos a clave murcielago\n");

printf("\n");
printf("\n");

printf("ingresa una palabra\n");
printf("\n");
printf("\n");

gets(palabra);

printf("\n");

while(palabra[x]!='\x0')

{

for(j=0;j<10;j++)

   if(palabra[x] == murcielago[j])

      palabra[x]=codigo[j];

x++;

}

printf("La palabra traducida a clave murcielago es: %s\n",palabra);

printf("\n");


return 0;

}
