#include <stdio.h>
int factorial(int n);
/*
* Calcula n! para n mayor o igual a cero
*/
int factorial(int n)
{
int i, /* variable local */
producto = 1;
/* Calcula el producto n*(n-1)*(n-2)*...*2*1 */
for (i = n; i > 1; --i) {
producto *= i;
}
/* Devuelve el resultado de la funcion */
return (producto);
}
/*
* Muestra la llamada de una funcion desde la funcion principal
* que pasa un argumento a la funcion definida.
*/
int main(void)
{ int num, fact;
printf("Dar un entero entre 0 y 10> ");
scanf("%d", &num);
if (num < 0) {
printf("El factorial de un numero negativo (%d) es indefinido\n", num);
}
else if (num <= 30) {
fact = factorial(num);
printf("El factorial de %d es %d\n", num, fact);
}
else {
printf("Numero fuera de rango: %d\n", num);
}
return (0);
}
