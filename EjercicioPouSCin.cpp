#include <stdio.h>
#include <stdlib.h>
#include <cstring>


int main(){
	char pal[100];
	int a,x;
	printf("Ingrese una palabra: ");
	scanf("%s",pal);
	a=strlen(pal);
	x=a*a;
	
	printf("La palabra ingresada tiene %d caracteres \n",a);
	printf("Elresultado de multiplicar %d por si mismo es:%d\n",a,x);
	
	if(x==16){
		for(int i=1;i<=x;i++){
			printf("*");
			if(i%4==0){
			printf("\n");
		}
	}
}
return 0;
}
