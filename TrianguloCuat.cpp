#include <stdio.h>
#include <ncurses.h>

void mostrar(int dim){
	for(int y=1; y<=dim;y++){
		for(int x=0; x !=y;x++){
		printf("%d",x+1);
			
		}
		printf("\n");
	}
}
int main(){
	int dim;
	printf("\n introduzca la dimension: ");
	scanf("%d",&dim);
	mostrar(dim);
	getch();
	return 0;
}
