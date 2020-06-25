#include <stdio.h>
#include <stdlib.h>
 
int main(){
	int l [10],i,n,c;
	c=0;
	printf ("\n");

	printf( "Ingrese 10 numeros para saber cuantas veces se repiten");

	printf ("\n");

 
	for (i=0; i<10; i++){
		printf("\nDigite el %d numero de la lista: ",i);
		scanf("%d",&l[i]);
	}
	printf ("\n");
	printf("Digite el numero que quiere saber cuantas veces se repite: ");
	scanf("%d",&n);
	for (i=0; i<10; i++){
		if (n == l[i]){
			c++;
		}
	}
	printf ("\n");
	printf("El numero %d, se repite %d",n,c);
	printf ("\n");
	return 0;
}