#include <iostream>

using namespace std;

int main(){
    int num = 1;
    while(num < 100){
        if(num % 7 != 0){
            cout << num << endl;
        }
        num ++;
    }
    return 0;
}
