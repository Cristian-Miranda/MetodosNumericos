#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=17,y;
	int*p;
	p=&x;
	printf("El valor de x es %p",*p);
	y=*p+3;
	printf("\t El valor de y es %d",y);
	return 0;
}
