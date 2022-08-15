#include <iostream>
using namespace std;

int main(){
    // Variabel referensi adalah "referensi" ke variabel yang ada, dan dibuat dengan operator &:

    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    // Sekarang, kita dapat menggunakan nama variabel makanan atau nama referensi makanan untuk merujuk ke variabel makanan:

    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza
    return 0;
}