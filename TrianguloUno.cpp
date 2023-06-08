#include <stdio.h>

int main (){
	int a,b,c;
	int d;
	
	printf("Ejecute con cualquier numero: ");
	scanf("%d",&d);
	
	for(int a=1;a<=d;a++){

		for(int b=1;b<=d;b++){
		c=a*b;
		printf("%d \t",c);
	}
		printf("\n");
}
return 0;
}
