#include <iostream>

using namespace std;

int main(){
    // if doang
    if (20 > 18)
    {
        cout << "20 is greater than 18";
    }

    // if else
    int time = 20;
    if (time < 18){
        cout << "Good day.";
    }else{
        cout << "Good evening.";
    }
    // Outputs "Good evening."

    //if else if
    int time = 22;
    if (time < 10){
        cout << "Good morning.";
    } else if (time < 20){
        cout << "Good day.";
    } else{
        cout << "Good evening.";
    }
    // Outputs "Good evening."

    // cara singkat
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    
    return 0;
}