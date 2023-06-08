#include <iostream>

using namespace std;

int main(){
    int arreglo[100];
    int i = 0;
    while(i<100){
        arreglo[i++] = (i)*2;
    }
    i=0;
    while(i<100){
        cout <<"2 * "<<(i+1)<<"= " << arreglo[i++] << endl;
    }
    return 0;
}
