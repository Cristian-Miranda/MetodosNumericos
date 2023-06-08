#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b);

int main(){
	int a,b,max;
	
	printf("Ingrese el primer numero: \n");
	scanf("%d",&a);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&b);
	
	max=maximo(a,b);
	printf("%d\n",max);
	
	return 0;
}

int maximo(int a, int b){
	int max;
	if(a<b){
		printf("Es mayor el numero: %d\n",b);
	}else if(a>b){
		printf("Es mayor el numero: %d\n",a);
	}else if(a=b){
		printf("Los numeros son iguales  \n");
	}
	return 0;
}
