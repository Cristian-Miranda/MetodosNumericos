#include <stdio.h>
#include <stdlib.h>

int main(){
	int w =9;
	int x =3;
	int y =7;
	int z=-2;
	
	printf("Enunciado uno: %d\n",((x<y)&(w>z)));
	printf("Enunciado 2: %d\n",((x>=w)^(z=y)));
	printf("Enunciado 3: %d\n",((y<=x)^(x!=w)));
	printf("Enunciado 4: %d\n",((w==9)^(x==3)));
	printf("Enunciado 5: %d\n",((y>z)&(z=x)));
	printf("Enunciado 6: %d\n",(!w !=9));
	
	system("Pause");
	return 0;
}



