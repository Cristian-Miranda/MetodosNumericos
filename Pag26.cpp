#include <iostream>

using namespace std;

int main(){
    int num = 3;
    while(num < 1000){
        if(num % 3 == 0){
            cout << num << endl;
        }
        num += 3;
    }
    return 0;
}
