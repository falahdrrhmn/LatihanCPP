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
