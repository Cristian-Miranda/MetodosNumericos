#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int len;
	char origen[]="Programacion";
	char destino[12];
	strcpy(destino,origen);
	printf("Palabra_1: %s\n",origen);
	
	
	  
	char origenU[]="Computadora";
	char destinoU[12];
	strcpy(destinoU,origenU);
	printf("Palabra_2: %s\n",destinoU); 
	printf("\n");
	printf("Palabra_1: %s\n",destinoU); 
	 
	printf("Palabra_2: %s\n",origen); 
	         
	system("Pause");
	return 0;
}
