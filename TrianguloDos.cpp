#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
printf("(1 a N) Escribe el numero a llegar");
	scanf("%d",&c);
	
	for(int a=1;a<=c;a++){
	for(int b=1;b<=a;b++){
		printf("*");
	}
	printf("\n");
}
	printf("\n");
	for(int a=c;a>=1;a--){

	for(int b=a;b>=1;b--){
		printf("*");
	}
	printf("\n");
}
return 0;
}

