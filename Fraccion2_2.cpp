#include <stdio.h>
#include <stdlib.h>
int main(){

	double a=5;
	double b=2;
	double c=1;
	double d=4;
	
	double e;
	
	e=(a+(b/(c/(c+(b/(b-(c/d)))))));
	printf("Resultado: %f \n",e);
	
	system("Pause");
	return 0;
}

