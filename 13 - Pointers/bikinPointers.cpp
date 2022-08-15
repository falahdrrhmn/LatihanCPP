#include <iostream>
using namespace std;

int main(){
    // Anda belajar dari bab sebelumnya, bahwa kita bisa mendapatkan alamat memori variabel dengan menggunakan operator &:

    // contoh
    string food = "Pizza"; // A food variable of type string

    cout << food;  // Outputs the value of food (Pizza)
    cout << &food; // Outputs the memory address of food (0x6dfed4)

    // Namun pointer, adalah variabel yang menyimpan alamat memori sebagai nilainya.
    // Variabel pointer menunjuk ke tipe data(seperti int atau string) dari tipe yang sama, dan dibuat dengan operator*.Alamat variabel yang sedang Anda kerjakan ditetapkan ke pointer :

    string food = "Pizza"; // A food variable of type string
    string *ptr = &food;   // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Tip: Ada tiga cara untuk mendeklarasikan variabel pointer, tetapi cara pertama lebih disukai:
    string* mystring; // Preferred
    string *mystring;
    string * mystring;

    return 0;
}