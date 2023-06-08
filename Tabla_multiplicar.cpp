#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i=1, tabla=1, limite=1;
 int * liimite=NULL;

    printf("Que tabla de multiplicar desea consultar: ");
    scanf("%d", &tabla);
    printf("Ingrese el maximo de operaciones: ");
    scanf("%d", &limite);

    liimite=malloc(limite * sizeof(int));

    for(; i<limite; i++){
        *(liimite+i) = i*tabla;
    }
    for(i=0; i<limite; i++){
        printf("\n %2d x %2d = %2d", tabla, i, *(liimite+i));
    }
    free(liimite);
    printf("\n\n");
    return 0;
}
