#include <iostream>
using namespace std; 

int main(){
    // loop array menggunakan for loop
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\n";
    }

    return 0;
}