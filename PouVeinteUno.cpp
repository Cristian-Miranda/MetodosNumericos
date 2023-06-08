#include <stdio.h>

int main(){
	char cadena[10];
	printf("un int ocupa %d bytes\n",sizeof(int));
	printf("un char ocupa %d bytes\n",sizeof(char));
	printf("un float ocupa %d bytes\n",sizeof(float));
	printf("un double ocupa %d bytes\n",sizeof(double));
	printf("cadena ocupa %d bytes",sizeof(cadena));
}
