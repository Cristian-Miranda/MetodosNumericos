#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <iostream>
using namespace std;

void caracteresInversos(){
	char c;
	stack<char>pila;
	cout<<"Introduce caracteres hasta que ingrese un espacio o un salto de linea :\n";
	while((c=getchar())!='\0'&c!='\n'){
		pila.push(c);
	}
	cout<<"Caracteres en orden inverso: ";
	while(!pila.empty()){
		cout<<pila.top();
		pila.pop();
	}
	cout<<endl;
}
int main(){
	caracteresInversos();
	return 0;
}
