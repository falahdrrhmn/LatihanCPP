#include <iostream>
using namespace std;

int myFunction(int x, int y)
{
    return x + y;
}

int main()
{
    cout << myFunction(5, 3);
    return 0;
}

// Outputs 8 (5 + 3)