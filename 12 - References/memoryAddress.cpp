#include <iostream>
using namespace std;

int main(){
    // Pada contoh dari halaman sebelumnya, operator & digunakan untuk membuat variabel referensi. Tapi itu juga bisa digunakan untuk mendapatkan alamat memori dari sebuah variabel; yang merupakan lokasi penyimpanan variabel di komputer.
    // Ketika sebuah variabel dibuat dalam C++, alamat memori diberikan ke variabel.Dan ketika kita menetapkan nilai ke variabel, itu disimpan di alamat memori ini.
    // Untuk mengaksesnya,gunakan operator&, dan hasilnya akan menunjukkan di mana variabel disimpan :

    string food = "Pizza";

    cout << &food;

    // Dan mengapa berguna untuk mengetahui alamat memori?
    // Referensi dan Pointer(yang akan Anda pelajari di bab berikutnya) penting dalam C++, karena mereka memberi Anda kemampuan untuk memanipulasi data dalam memori komputer - yang dapat mengurangi kode dan meningkatkan kinerja.
    // Kedua fitur ini merupakan salah satu hal yang membuat C++ menonjol dari bahasa pemrograman lain,seperti Python dan Java.

    return 0;
}