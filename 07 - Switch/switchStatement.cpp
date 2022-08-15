#include <iostream>
using namespace std;

int main(){
    // contoh switch
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
    // Outputs "Thursday" (day 4)

    // break
    /*
    Ketika C++ mencapai kata kunci break, itu keluar dari blok switch.
    Ini akan menghentikan eksekusi lebih banyak kode dan pengujian kasus di dalam blok.
    Ketika kecocokan ditemukan, dan pekerjaan selesai, saatnya untuk istirahat. Tidak perlu untuk pengujian lebih lanjut.

    Istirahat dapat menghemat banyak waktu eksekusi karena "mengabaikan" eksekusi semua sisa kode di blok switch.
    */

    // default keyword
    int day = 4;
    switch (day)
    {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }
    // Outputs "Looking forward to the Weekend"

    // Catatan: Kata kunci default harus digunakan sebagai pernyataan terakhir di sakelar, dan tidak perlu istirahat.

    return 0;

}