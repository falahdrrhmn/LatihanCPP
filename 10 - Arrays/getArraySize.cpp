#include <iostream>
using namespace std;

int main(){
    // cara tau jumlah array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);
    // output = 20
    // Kok 20? bukan 5? Itu karena operator sizeof() mengembalikan ukuran tipe dalam byte.
    // Anda belajar dari bab Tipe Data bahwa tipe int biasanya 4 byte,
    // jadi dari contoh di atas, 4 x 5(4 byte x 5 elemen) = 20 byte.
    // Untuk mengetahui berapa banyak elemen yang dimiliki array,
    // Anda harus membagi ukuran array dengan ukuran tipe data yang dikandungnya :

    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    // output = 5

    return 0;
}