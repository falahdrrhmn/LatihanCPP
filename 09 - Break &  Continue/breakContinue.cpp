#include <iostream>
using namespace std;

int main(){
    // contoh break 
    for (int i = 0; i < 10; i++){
        if (i == 4){
            break;
        }
        cout << i << "\n";
    }
    return 0;
    /*
    output:
    0
    1
    2
    3
    */

    // contoh continue
    for (int i = 0; i < 10; i++){
        if (i == 4){
            continue;
        }
        cout << i << "\n";
    }

    /*
    output:
    0
    1
    2
    3
    5
    6
    7
    8
    9
    */

    return 0;
}