#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero =0;
	int x;
	int y;
	
	while(numero<=500){
		printf("%d,", numero);
		x=numero*numero;
		y=numero*numero*numero;
		numero++;
		printf("%d,", x);
		printf("%d,", y);
	}
	
		system("Pause");
		return 0;
}
