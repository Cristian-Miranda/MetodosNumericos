#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;
char anti[250];
char nuev[250];
int main(){
cout<<"Ingrese el nombre del archivo que descea modificar"<<endl;	
cin >> anti;
cout<<"Ingrese el nombre del archivo que descea modificar"<<endl;	
cin >> nuev;

rename(anti, nuev);
system("pause");
return 0;

}

