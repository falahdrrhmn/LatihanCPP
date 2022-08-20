#include <iostream>
using namespace std;

void functionKu(int angkaKu[5]){
    for(int i = 0; i < 5; i++){
        cout << angkaKu[i] << "\n";
    }
}

int main(){
    
    int angkaKu[5] = {10, 20, 30, 40, 50};
    functionKu(angkaKu);

    return 0;
}