#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,i,j;
	printf("Ingresa numero:");
	scanf("%d",&a);
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d\t",a+2*i+2*j);
	}
}
	system("Pause");
	return 0;
}
