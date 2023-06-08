#include <iostream>

using namespace std;

int main(){
    int num = 1;
    while(num < 1000){
        if(num % 2 == 0 && num % 7 == 0){
            cout << num << endl;
        }
        num ++;
    }
    return 0;
}
