#include <iostream>
using namespace std;

void myFunction()
{ // declaration
  // the body of the function (definition)
    cout << "halo" ;
}

int main(){
    // function sama method kurang lebih sama cara kerjanya sama, tapi tetep ada bedanya
    // Deklarasi: tipe pengembalian, nama fungsi, dan parameter (jika ada)
    // Definisi:tubuh fungsi(kode yang akan dieksekusi)

    myFunction();
    // klo functionnya setelah method main, dan dipanggil di main, bakal error

    return 0;
}