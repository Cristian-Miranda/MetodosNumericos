#include <stdio.h>
#include <stdlib.h>
int main(){

	double a=1;
	double b=3;
	double c=5;
	double d=30;
	double e=23;
	
	double z;
	
	z=((a/b)+(b/c)+(a/d)/(e/d));
	printf("Resultado: %f \n",z);
	
	system("Pause");
	return 0;
}

