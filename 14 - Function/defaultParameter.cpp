#include <iostream>
using namespace std;

void functionKu(string nama = "gada"){
    cout << "nama saya adalah : " + nama + "\n"; 
}

int main(){
    
    functionKu();
    // output : nama saya adalah : gada
    // dikarenakan tidak mengisi parameter dengan argumen
    
    functionKu("ujang");
    // output : nama saya adalah : ujang
    // dikarenakan parameter diisi dengan argumen

    return 0;
}