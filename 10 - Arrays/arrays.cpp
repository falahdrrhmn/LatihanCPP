#include <iostream>

using namespace std;

int main(){
    // deklarasi array
    string cars[4];
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    // deklarasi langsung diisi
    int myNum[3] = {10, 20, 30};

    // akses array
    cout << cars[0];
    // Outputs Volvo

    // ganti elemen array
    cars[0] = "Opel";
    
    
    return 0;
}