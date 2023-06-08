#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero;
	printf("Ingresa la calificacion del curso: \n");
		scanf("%d", &numero);
	if (numero >=7){
		printf("Felicidades aprobaste el curso!\n");
	}else{
		printf("La calificacion minima aprobatoria es: 8\n");
	}
	system("Pause");
	return 0;
}

