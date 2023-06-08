#include <iostream>

using namespace std;

int main(){

int numero, suma = 0;
int i;
cout <<"ingrese el numero N";
cin >> numero;

for( i = 1; i<=numero;i++){
cout << i << "+" << endl;
suma += i;  
    
}
cout << "= " << suma << endl;

    return 0;
}
