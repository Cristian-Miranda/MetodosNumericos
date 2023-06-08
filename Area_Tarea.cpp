#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main(){
double hip=100;
double ang=45;
double cat_op;
double cat_ad;
double AT;
double AC;
cat_op=sin(ang*PI/180)*100;
printf("Dimension del cateto opuesto: %3f \n",cat_op);
cat_ad=cos(ang*PI/180)*100;
printf("\n Dimension del cateto adyacente: %.3f \n",cat_ad);
AT=((cat_op*cat_ad)/2);
printf("\n El area del tringulo es: %3f \n",AT);
AC=(AT/2);
printf("\n El area del cuadrado es: %3f \n",AC);

system("Pause");
}

