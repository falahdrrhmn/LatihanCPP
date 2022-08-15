#include <iostream>
using namespace std;

int main(){
    // kita bisa memauskkan user input menggunakan string
    // mirip sama java, cin nganggep spasi sama halnya kayak tab dll atau karakter pengakhiran. artinya walaupun mengetik banyak kata dengan spasi. maka yang disimpan adalah satu kata

    // misal
    string namaLenkap;
    cout << "Masukkan nama lengkap anda : ";
    cin >> namaLenkap;
    cout << "nama anda adalah : " << namaLenkap;
    // Masukkan nama lengkap anda : Muhamamd falah a
    // nama anda adalah : muhammad

    // Itu sebabnya, saat bekerja dengan string, kita sering menggunakan fungsi getline() untuk membaca sebaris teks. Dibutuhkan cin sebagai parameter pertama, dan variabel string sebagai yang kedua:
    // cara mengatasinya adalah dengan
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe

    return 0; 
}