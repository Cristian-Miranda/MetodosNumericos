#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,r=0;
	
	printf("Numero:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		r=r+i;
	}
	printf("Resultado: %d",r);
}
