#include <iostream>
using namespace std;

int main(){
    // singkatnya mutlidimensional array itu array didalam array

    // contoh
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letters[0][2]; // Outputs "C"

    // ganti elemen
    cout << letters[0][0]; // Now outputs "Z" instead of "A"

    // loop di multidimensional array
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }

    // contoh lagi
    string letters[2][2][2] = {
        {{"A", "B"},
        {"C", "D"}},
        {{"E", "F"},
        {"G", "H"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    return 0;
}