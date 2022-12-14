# NYOBA LATIHAN C++

## Basic syntax mangil Hello world!
```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```
cara manggil hello world di c++ kayak gitu

Penjelasannnya
1. Baris pertama ```#include <iostream>``` itu header file library yang memungkinkan kita menggunakna input dan output objek, seoerti halnya cout, klo gada itu ya error. File header menambahkan fungsionalitas ke program C++.
2. Selanjutnya ada juga ```using namespace std``` berarti kita dapat menggunakan nama untuk objek dan variabel dari pustaka standar.
3. Setelah itu juga ada ```int main()``` ini merupakan sebuah function, dan kode yang ada didalam {} baka dieksekusi
4. Selanjutnya ada ```cout``` cara bacanya "see out" kalo singkatannya console out. Ini merupakan sebuah objek yang juga digunakan bebarengan dengan``` << ```

***Note:***

C++ juga bisa ditulis kayak gini

```c++
int main () { cout << "Hello World! "; return 0; }
```

tapi kurang rekomendasi karna bakal sulit dibaca.

Beberapa program C++ yang berjalan tanpa pustaka namespace standar. Baris using namespace std dapat dihilangkan dan diganti dengan kata kunci std, diikuti oleh operator :: untuk beberapa objek:

kayak gini contohnya 

```C++
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

<br><br><br>

## Comments 
bagian kode yang gatereksekusi, ada 2, single line comments, sama multi line comments. gini contohnya 

Single-line Comments

```C++
#include <iostream>

// ini comment + bagian sini gatereksekusi
int main() {
  std::cout << "Hello World!";
  return 0;
}
```

Multi-line Comments

```C++
#include <iostream>

/* 
ini comment 
+
bagian
sini 
gatereksekusi
*/

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

<br><br><br>

## New Line

```c++
#include <iostream>

using namespace std;

int main(){
    cout<< "halo cantik \n";
    cout<< "halo cantik" << endl;
    cout<< "halo cantik new line lagi make endl";

    return 0;
}

output: 
halo cantik 
halo cantik 
halo cantik new line lagi make endl
```

Buat bikin new line kita bisa make ```\n``` didalam string, atau bisa ```<< endl``` diakhir

```\n``` dan ```endl``` digunakan untuk memutus garis. Namun, ```\n``` paling banyak digunakan.

Tapi apa itu ```\n``` sebenarnya?
Karakter baris baru ```\n``` disebut **escape sequence**, dan memaksa kursor untuk mengubah posisinya ke awal baris berikutnya di layar. Ini menghasilkan baris baru.

Contoh escape sequences lainnya adalah:

```c++
#include <iostream>

using namespace std;

int main(){
    cout<< "nambah \t tab";
    cout<< "tambah garis miring\\";
    cout<< "tambah double quotes\";

    return 0;
}
```

<br><br><br>

## Function

Deklarasi: tipe pengembalian, nama fungsi, dan parameter (jika ada)
Definisi: tubuh fungsi (kode yang akan dieksekusi)

```c++
void myFunction() { // declaration
  // the body of the function (definition)
}
```

kalo dipanggilnya sebelum function dibikin bakal error

```c++
int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

// Error
```

Jadi cara mengatasinya dideklarasi dulu sebelumnya 

```c++
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
```

<br>

### Parameters and Arguments

```c++
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
```

Ketika sebuah parameter dilewatkan ke fungsi, itu disebut argumen. Jadi, dari contoh di atas: fname adalah parameter, sedangkan Liam, Jenny dan Anja adalah argumen.

bisa juga ditambahin defaul parameter, kayak gini contohnya

```c++
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA
```

Paramter & agrumen bisa lebih dari 1.

```c++
void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Liam Refsnes. 3 years old.
// Jenny Refsnes. 14 years old.
// Anja Refsnes. 30 years old.
```
<br>

### Return Values

kata kunci void artinya gada return value, jika mau ada return value harus menggunakan function dengan tipe data, seperti ini

```c++
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}

// Outputs 8 (5 + 3)
```

<br>

### Functions - Pass By Reference

agak ribet yang ini 

```c++
#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}

output

#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
#include <iostream>
using namespace std;
???
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
???
int main() {
  int firstNum = 10;
  int secondNum = 20;
???
  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";
???
  swapNums(firstNum, secondNum);
???
  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";
???
  return 0;
}
???
Before swap:
1020
After swap:
2010
```

<br>

### Pass Arrays as Function Parameters

intinya masukin array kedalam function

```c++
#include <iostream>  
using namespace std;  

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  return 0;
}  
```

<br>

### Function Overloading

intinya nama function yang sama asal tipe data beda ndakpapa

```c++
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```

<br>

### Recursian

intinya bakal ngelakui pengulangan dengan nilai akhir yang ditentukan. cara kerjanya dibakal ngeeksekusi dirinya sendiri terus meneruss

kayak gini contohnya 

```c++
#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}

output
55 (10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1)
```

<br><br><br>

# Array

## Cara bikin array

```c++
string cars[4];
```

Cara ngisi array

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

Bisa dengan tipe data lain

```c++
int myNum[3] = {10, 20, 30};
```

## Akses elemen array

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
```

## Mengubar elemen pada array

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0];
// Now outputs Opel instead of Volvo
```

## Loop di array

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++) {
    cout << cars[i] << "\n";
  }
  return 0;
}

output:
Volvo
BMW
Ford
Mazda
```

## Bikin array tanpa ukuran array

Kalo misalnya dikasi angka bakal ada batasnya kayak gini

```C++
string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
```

atau

```c++
string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it
```

Kalo tanpa angka, jadi gini

```c++
string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
```

## Mendapatkan size array

```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);

output:
20
```

kenapa 20? bukan 5? karena sizeof mengembalikan nilai size dari tipe data dalam bytes. Dalam integer bernilai 4 bytes. dan dalam array terdadpat jumlah 5 elemen. sehingga 4 kalo 5 = 20. 

Untuk mengetahui berapa banyak elemen yang dimiliki array, Anda harus membagi ukuran array dengan ukuran tipe data yang dikandungnya:

seperti ini:
```c++
int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;

output:
5
```

## Array multidimensional

singkatnya dalam array ada beberapa array

```c++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[0][2];  


Outputs
C
```

## Loop pada array multimensional

singkatnya gini

```c++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for(int i = 0; i < 2; i++) {
  for(int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}

output:
A
B
C
D
E
F
G
H
```

<br><br><br>

# Structures (struct)

mirip array tapi bedanya bisa beberapa tipe variable jadi satu

## Cara buat struct

```c++
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable
```

## One Structure in Multiple Variables

```c++
struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
```

## Named Structures

```c++
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```

setelah itu untuk mendeklarasi variable yang menggunakan structure. gini caranya

```c++
myDataType myVar;
```

## Contoh lain penggunaan struct

```c++
#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
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

output:
BMW X5 1999
Ford Mustang 1969
```




<br><br><br>

# C++ OOP

Class & Object

Cara bikin class 
```C++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```

Cara bikin Objek
```C++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```

objek bisa lebih dari satu

## Class Methods

Method adalah function yang dimiliki oleh kelas.

Ada dua cara untuk mendefinisikan fungsi yang termasuk dalam kelas:

1. Definisi di dalam kelas
2. Definisi luar kelas

Definisi didalam kelas 

```c++
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```

Definisi di luar kelas

```c++
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

```

Menggunaakan parameter di dalam method 

```c++
#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}

```

## Constructors

Konstruktor dalam C++ adalah metode khusus yang dipanggil secara otomatis ketika objek kelas dibuat.

```c++
class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

output:
Hello World!
```

Constructor juga bisa make Parameters

```c++
class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

output:
BMW X5 1999
Ford Mustang 1969
```

## Access Specifier

Kata kunci publik adalah penentu akses. Penentu akses menentukan bagaimana anggota (atribut dan metode) kelas dapat diakses. Pada contoh di atas, anggota bersifat publik - yang berarti mereka dapat diakses dan dimodifikasi dari luar kode.

Namun, bagaimana jika kita ingin anggota bersifat pribadi dan tersembunyi dari dunia luar?

Dalam C++, ada tiga penentu akses:

- publik - anggota dapat diakses dari luar kelas
- private - anggota tidak dapat diakses (atau dilihat) dari luar kelas
- protected - anggota tidak dapat diakses dari luar kelas, namun, mereka dapat diakses di kelas yang diwarisi. Anda akan mempelajari lebih lanjut tentang inheritance nanti.

## Enkapsulasi (encpasulation)

Arti Enkapsulasi, adalah untuk memastikan bahwa data "sensitif" disembunyikan dari pengguna. Untuk mencapai ini, Anda harus mendeklarasikan variabel/atribut kelas sebagai pribadi (tidak dapat diakses dari luar kelas). Jika Anda ingin orang lain membaca atau mengubah nilai anggota pribadi, Anda dapat menyediakan metode get dan set publik.

Singkatnya biar bisa ngakses attribut dengan access specifier private

Untuk mengakses atribut pribadi, gunakan metode "get" dan "set" publik:

Gini contohnya

```c++
#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

output:
50000
```

Contoh dijelaskan
Atribut salary adalah private, yang memiliki akses terbatas.

Metode setSalary() publik mengambil parameter (s) dan menetapkannya ke atribut salary (salary = s).

Metode getSalary() publik mengembalikan nilai atribut gaji pribadi.

Di dalam main(), kita membuat objek dari kelas Employee. Sekarang kita dapat menggunakan metode setSalary() untuk mengatur nilai atribut private menjadi 50000. Kemudian kita memanggil metode getSalary() pada objek untuk mengembalikan nilainya.


## Inheritance

### Inheritance

Dalam C++, dimungkinkan untuk mewarisi atribut dan metode dari satu kelas ke kelas lainnya. Kami mengelompokkan "konsep pewarisan" ke dalam dua kategori:

- Derived Class (child) - kelas yang mewarisi dari kelas lain
- Base Class (parent) - kelas yang diwarisi dari

Pada contoh di bawah, kelas Mobil (anak) mewarisi atribut dan metode dari kelas Kendaraan (induk):

```c++
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

output:
Tuut, tuut!
Ford Mustang
```

### Multilevel Inheritance

Sebuah kelas juga dapat diturunkan dari satu kelas, yang sudah diturunkan dari kelas lain.

Dalam contoh berikut, MyGrandChild diturunkan dari kelas MyChild (yang diturunkan dari MyClass).

contoh

```c++
#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class 
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

output:
Some content in parent class.
```

### Multiple Inheritance

Kelas juga dapat diturunkan dari lebih dari satu kelas dasar, menggunakan daftar yang dipisahkan koma:

gini contohnya

```c++
#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

output:
#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

output:
Some content in parent class.
Some content in another class.
```

### Inheritance Access

Anda mempelajari dari bab Access Specifiers bahwa ada tiga specifier yang tersedia di C++. Selama ini kita hanya menggunakan public (anggota kelas dapat diakses dari luar kelas) dan private (anggota hanya dapat diakses di dalam kelas). Penentu ketiga, protected, mirip dengan private, tetapi juga dapat diakses di kelas yang diwarisi:

Gini contohnya: 

```c++
#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

output:
Salary: 50000
Bonus: 15000
```

## Polymorphism

Polimorfisme berarti "banyak bentuk", dan itu terjadi ketika kita memiliki banyak kelas yang terkait satu sama lain melalui pewarisan.

Seperti yang kami tentukan di bab sebelumnya; Warisan memungkinkan kita mewarisi atribut dan metode dari kelas lain. Polimorfisme menggunakan metode tersebut untuk melakukan tugas yang berbeda. Ini memungkinkan kita untuk melakukan satu tindakan dengan cara yang berbeda.

Misalnya, pikirkan kelas dasar yang disebut Animal yang memiliki metode yang disebut animalSound(). Kelas Hewan yang diturunkan dapat berupa Babi, Kucing, Anjing, Burung - Dan mereka juga memiliki implementasi sendiri dari suara binatang (babi oinks, dan kucing mengeong, dll.):

```c++
#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n" ;
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n" ;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n" ;
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

output:
The animal makes a sound
The pig says: wee wee
The dog says: bow wow
```

## Exceptions

Saat mengeksekusi kode C++, kesalahan yang berbeda dapat terjadi: kesalahan pengkodean yang dibuat oleh programmer, kesalahan karena input yang salah, atau hal-hal lain yang tidak terduga.

Ketika terjadi kesalahan, C++ biasanya akan berhenti dan menghasilkan pesan kesalahan. Istilah teknis untuk ini adalah: C++ akan melempar pengecualian (melempar kesalahan).

### C++ try and catch

Penanganan eksepsi dalam C++ terdiri dari tiga kata kunci: try, throw dan catch:

Pernyataan try memungkinkan Anda untuk menentukan blok kode yang akan diuji untuk kesalahan saat sedang dieksekusi.

Kata kunci throw melempar pengecualian saat masalah terdeteksi, yang memungkinkan kita membuat kesalahan khusus.

Pernyataan catch memungkinkan Anda untuk menentukan blok kode yang akan dieksekusi, jika terjadi kesalahan pada blok try.

Kata kunci coba dan tangkap berpasangan:

```c++
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}
```

contoh kerja 

```c++
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}

output:
Access denied - You must be at least 18 years old.
Age is: 15
```

Contoh dijelaskan
Kami menggunakan blok coba untuk menguji beberapa kode: Jika variabel usia kurang dari 18, kami akan melempar pengecualian, dan menanganinya di blok tangkapan kami.

Di blok tangkap, kami menangkap kesalahan dan melakukan sesuatu untuk itu. Pernyataan catch mengambil parameter: dalam contoh kami, kami menggunakan variabel int (myNum) (karena kami melemparkan pengecualian tipe int di blok try (usia)), untuk menampilkan nilai usia.

Jika tidak ada kesalahan yang terjadi (misalnya jika usia 20 bukannya 15, artinya akan lebih besar dari 18), blok tangkap dilewati:

jadi kalo misalnya kayak gini 

```c++
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 20;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}

output:
Access granted - you are old enough.
```

Anda juga dapat menggunakan kata kunci throw untuk menampilkan nomor referensi, seperti nomor/kode kesalahan khusus untuk tujuan pengorganisasian:

```c++
#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;  
  }
  return 0;
}

output:
Access denied - You must be at least 18 years old.
Error number: 505
```


<a href="https://github.com/falahdrrhmn/CPP-Struktur-Data">Struktur Data C++</a>
