#include <stdio.h>
#include <stdlib.h>

int main(){
	int HST;
	int PH;
    int SS;
    int SSE;
    
printf("Horas semanasles trabajadas:\n");
		scanf("%d", &HST);
		printf("Pago por hora:\n");
		scanf("%d", &PH);
		SS=(HST * PH);
	if (HST <=40){
		
		printf("El sueldo semanal es: $ %d \n",SS);
		
	 }else if (HST >40){
		SSE=(1.5 *(HST-40)*PH);
		printf("El sueldo extra es: $ %d \n",SSE);
		SS=(40 * PH + (PH * 1.5 *(HST-40)));
		printf("sueldo TOTAL semanal con extra: $ %d \n",SS);
}
	system("Pause");
	return 0;
}	

