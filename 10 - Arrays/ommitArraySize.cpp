#include <iostream>
using namespace std; 

int main(){
    // Anda tidak perlu menentukan ukuran array. Tetapi jika tidak, itu hanya akan sebesar elemen yang dimasukkan ke dalamnya:

    string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3

    // Ini benar-benar baik-baik saja. Namun, masalah muncul jika Anda menginginkan ruang ekstra untuk elemen masa depan. Maka Anda harus menimpa nilai yang ada:

    string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // Namun, jika Anda menentukan ukurannya, array akan memesan ruang ekstra:

    string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it

    // Dimungkinkan juga untuk mendeklarasikan array tanpa menentukan elemen pada deklarasi, dan menambahkannya nanti:

    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";

    
    return 0;
}