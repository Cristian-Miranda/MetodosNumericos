#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctime> 
int main(){
	unsigned ti, tf;
	int PN;
	int SN;
    int Sum;
    int Res;
    int Mul;
    double Div;
printf("Primer numero:\n");
		scanf("%d", &PN);
		printf("Segundo numero:\n");
		scanf("%d", &SN);
		ti=clock();
		
		Sum=(PN+SN);
		printf("El resultado de la suma es:  %d \n",Sum);
		Res=(PN-SN);
		printf("El resultado de la resta es:  %d \n",Res);
		Mul=(PN*SN);
		printf("El resultado de la multipliacion es:  %d \n",Mul);
		Div=(PN/SN);
		printf("El resultado de la divicion es:  %f \n",Div);
	 	tf = clock();
	double time = (double(tf-ti)/CLOCKS_PER_SEC);
	printf("El tiempo consumido es:  %f  \n",time);
}
