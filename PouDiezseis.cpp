#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
int contador=0;
string frase;
char caracter;

cout<<"Introduzca una frase: ";
getline(cin,frase,'\n');
cout<<"Introduzca el caracter a contar: ";
cin>>caracter;

for(int i=0;i<frase.length();i++)
 	if(caracter==frase[i])
 	contador++;
 	if(contador>=1)
 	cout<<"La letra "<<caracter<<" aparecio "<<contador<<" veces.";
	else
	cout<<"La letra "<<caracter<<" aparecio "<<contador<<" veces.";
	return 0;	
}
