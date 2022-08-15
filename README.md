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
1. Baris pertama <code>#include <iostream></code> itu header file library yang memungkinkan kita menggunakna input dan output objek, seoerti halnya cout, klo gada itu ya error. File header menambahkan fungsionalitas ke program C++.
2. Selanjutnya ada juga <code>using namespace std</code> berarti kita dapat menggunakan nama untuk objek dan variabel dari pustaka standar.
3. Setelah itu juga ada <code>int main()</code> ini merupakan sebuah function, dan kode yang ada didalam {} baka dieksekusi
4. Selanjutnya ada <code>cout</code> cara bacanya "see out" kalo singkatannya console out. Ini merupakan sebuah objek yang juga digunakan bebarengan dengan<code> << </code>

***Note:***

C++ juga bisa ditulis kayak gini

```c++
int main () { cout << "Hello World! "; return 0; }
```

tapi kurang rekomendasi karna bakal sulit dibaca.

Beberapa program C++ yang berjalan tanpa pustaka namespace standar. Baris using namespace std dapat dihilangkan dan diganti dengan kata kunci std, diikuti oleh operator :: untuk beberapa objek:

kayak gini contohnya 

'''C++
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```