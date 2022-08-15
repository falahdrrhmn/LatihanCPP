#include <iostream>
using namespace std;

int main(){
    // singkatnya structur mirip array tapi bisa lebih dari 1 tipe data
    // cara buat structur
    struct {                    // Structure declaration
        int myNum;       // Member (int variable)
        string myString; // Member (string variable)
    } myStructure;       // Structure variable

    // --------------------------------------------------------------------
    
    // akses struktur
    // Create a structure variable called myStructure
    struct
    {
        int myNum;
        string myString;
    } myStructure;

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    // --------------------------------------------------------------------

    // 1 sttuktur juga bisa bikin lebih dari 1 variable. gini contohnya
    struct
    {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // --------------------------------------------------------------------

    // Named Structures
    struct myDataType
    { // This structure is named "myDataType"
        int myNum;
        string myString;
    };

    // Untuk mendeklarasikan variabel yang menggunakan struktur, gunakan nama struktur sebagai tipe data variabel:

    myDataType myVar;

    // --------------------------------------------------------------------

    // Declare a structure named "car"
    /*
    struct car
    {
        string brand;
        string model;
        int year;
    };

    int main()
    {
        // Create a car structure and store it in myCar1;
        car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

        // Create another car structure and store it in myCar2;
        car myCar2;
        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;

        // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

        return 0;
    }

    myDataType myVar;
    */

    return 0;
}