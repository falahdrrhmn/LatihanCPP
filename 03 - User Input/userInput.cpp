#include <iostream>
using namespace std;

int main(){
    // kalo user input kita make cin >>
    int nomer; 

    cout << "masukkan nomer : ";
    cin>> nomer;  //mengambil user input 
    cout << "Nomer yang anda masukkan adalah : " << nomer;

    return 0;

    /*
    cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
    cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
    */
}