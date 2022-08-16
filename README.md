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
​
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
​
int main() {
  int firstNum = 10;
  int secondNum = 20;
​
  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";
​
  swapNums(firstNum, secondNum);
​
  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";
​
  return 0;
}
​
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





