#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,i;
	int *arr;
	
	printf("Teclea la longitud de la cadena: ");
	scanf("%d",&x);
	
	arr=(int*)malloc(x*sizeof(int));
	
		for(i=0;i<x;i++){
			printf("Ingresa el valor para el elemento %d: ",i);
			scanf("%d",&arr[i]);
		}
	printf("Los elementos ingresados son:\n ");
		for(i=0;i<x;i++){		
	printf("%d \n",arr[i]);
	
}
free(arr);
return 0;
}
