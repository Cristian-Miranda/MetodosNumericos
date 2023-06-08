#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int main()
{
	int p_i,p_f;
	char Palabra[MAX],car;
	int i;
	
	printf("\n Introduzca la palabra: ");
	scanf("%c", &car);
	i=0;
	while(i<MAX && car!= '.')
	{
		Palabra[i]=car;
		i++;
		scanf("%c", &car);
	}
	p_i=0;
	p_f=i-1;

	while(p_i<p_f && Palabra[p_i]==Palabra[p_f])
	{
		p_i++;
		p_f--;
}
	if(p_i>=p_f)
	 printf("La palabra es palindroma!");
else
 printf("La palabra NO es palindroma!");

		system("Pause");
		return 0;
	}
