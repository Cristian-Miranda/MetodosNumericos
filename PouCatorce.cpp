#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int res;
	char str1[]="pa";
	char str2[]="paaaaarrrr";
	res=strcmp(str1,str2);
	if(res==0){
	printf("\n ambas palabras son iguales \n");
	printf("resultado: %d",res);
}else if(res<0){
	printf("\n la palabra dos es mayor \n");
	printf("resultado: %d",res);
}else{
	printf("resultado: %d",res);
	printf("\n la palabra uno es mayor \n");
}
	system("Pause");
	return 0;
}
