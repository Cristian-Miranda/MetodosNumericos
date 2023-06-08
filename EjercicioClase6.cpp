#include <stdio.h>
#include <stdlib.h>

int main(){
	int descuento =10;
	int descuentoCliente =20;
	int cliente=0;
	int z=1;
	
	z= (cliente) ? descuentoCliente : descuento;
	printf("El descuento es de %d \n", z);
	
	printf("Fin del programa \n");
		system("Pause");
		return 0;

}
	
