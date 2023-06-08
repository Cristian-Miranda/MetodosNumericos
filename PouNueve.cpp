#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char pal[100];
	int a,x;
	printf("Ingrese una palabra: ");
	scanf("%s",pal);
	a=strlen(pal);
	x=a*1;
	
	printf("La palabra ingresada tiene %d caracteres \n",a);
	printf("\n %s",pal);
	
	if(x>=1){
		for(int i=1;i<=x;i++){
			printf("brisas");
			if(i%x==0){
			printf("\n");
		}
	}
}
return 0;
}
