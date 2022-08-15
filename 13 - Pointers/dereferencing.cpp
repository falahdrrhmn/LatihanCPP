#include <iostream>
using namespace std;

int main(){
    string food = "Pizza"; // Variable declaration
    string *ptr = &food;   // Pointer declaration

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Perhatikan bahwa tanda *dapat membingungkan di sini, karena ia melakukan dua hal berbeda dalam kode kita :

    // Ketika digunakan dalam deklarasi(string * ptr), itu membuat variabel pointer.Ketika tidak digunakan dalam deklarasi,ia bertindak sebagai operator dereference.

    return 0;
}