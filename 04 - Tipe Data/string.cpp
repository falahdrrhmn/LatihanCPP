#include <iostream>

using namespace std;

int main(){
    string namaDepan = "Falah";
    string namaAkhir = "Abdurrohman";
    cout<< "namaku adalah " <<namaDepan + " " +namaAkhir;

    // kalo buat gabungin juga bisa make append, kyak gini contohnya
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
}