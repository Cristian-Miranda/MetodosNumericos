#include <stdio.h>
#include <stdlib.h>

int main(){
int antiguedad;
int sueldo;
int x;
printf("Anos de antiguedad:\n");
		scanf("%d", &antiguedad);
		
	if (antiguedad >=5){
		printf("Sueldo:\n");
		scanf("%d", &sueldo);
		x=(sueldo*100)/10;
	if (x >=1000){
	printf("Aceptado, Felicidades\n");	
	}
}else{
	printf("No Aceptado\n");
}
}

