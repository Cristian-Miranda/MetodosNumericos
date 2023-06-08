#include <stdio.h>
#include <stdlib.h>

struct CD{
char titulo[100];
char num_canciones[200];
char anio[3000];
char precio[200];
char artista[50];
};
int main(){
	
struct CD cd1;
printf("Ingresa el titulo \n");
gets(cd1.titulo);
printf("Ingresa elnumero de canciones del artista \n");
gets(cd1. num_canciones);
printf("Ingresa el año \n");
gets(cd1. anio);
printf("Ingresa el precio \n");
gets(cd1. precio);
printf ("%s \n", cd1. titulo);
printf ("Numero de canciones: %s \n", cd1. num_canciones);
printf ("Año: %s \n", cd1.anio);
printf ("Precio: %s \n", cd1. precio);
system("Pause");
return 0;
}
