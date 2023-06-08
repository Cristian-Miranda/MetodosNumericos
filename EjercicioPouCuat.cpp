#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main(){
	int a,b,c,p;
	float res;
	printf("Ingrese la primera dimencion: \n");
	scanf("%d",&a);
	printf("Ingrese la segunda dimencion: \n");
	scanf("%d",&b);
	printf("Ingrese la tercer dimencion: \n");
	scanf("%d",&b);
	
	p=((a+b+c)/2);
	
	res= sqrt(p*((p-a)*(p-b)*(p-c)));
	printf("Area es: %f\n",res);
	return 0;
	
}

