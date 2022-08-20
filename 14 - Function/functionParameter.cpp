#include <iostream>
using namespace std;


void functionKu(string nama){
    // string nama adalah parameter, sedangkan yang dimasukkan kedalam parameter adalah argumen
    cout<< "nama saya adalah : " + nama + "\n";
}

int main(){
    
    // falah, ujang, udin adalah argumen    
    functionKu("Falah");
    functionKu("Ujang");
    functionKu("Udin");
    // 

    return 0;
}