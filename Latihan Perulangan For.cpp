// Menampilkan Perulangan bilangan 1 sampai 10
#include <iostream>
using namespace std;
int main() {

    cout << "\n=== Bilangan  dari 1 sampai 10 ===\n" << endl;
    for(int i = 1; i <= 10; i++){
        cout << "Bilangan ke- " << i << endl;
    }

    return 0;
}
// Menampilkan bilangan genap dari 2 sampai 10
#include <iostream>
using namespace std;
int main() {
    
    cout << "\n=== Bilangan Genap dari 2 sampai 20 ===\n" << endl;
    for(int i = 2; i <= 20; i+=2){
        cout << "Bilangan Genap = " << i << endl;
    }

    return 0;
}
// Menampilkan bilangan ganjil dari 1 sampai 15
#include <iostream>
using namespace std;
int main() {
    
    cout << "\n=== Bilangan Ganjil dari 1 sampai 15 ===\n" << endl;
    for(int i = 1; i <= 15; i+=2){
        cout << "Bilangan Ganjil = " << i << endl;
    }

    return 0;
}
// Menghitung Jumlah bilangan a + bilangan b
#include <iostream>
using namespace std;
int main() {
    
    cout << "\n=== Penjumlahan Dari Bilangan a dan Bilangan b ===\n" << endl;

    int a , b;
    
    cout << "Masukkan Angka: ";
    cin >> a;
    cout << "Masukkan Angka: ";
    cin >> b;
    
    cout << "Hasil dari penjumlahan a + b adalah: " << a + b << endl;
      
    return 0;
}
// menampilkan tabel perkalian 5 dari 1*5 sampai 10*5
#include <iostream>
using namespace std;
int main() {

    cout << "\n=== Tabel Perkalian 5 ===\n" << endl;

    for(int i = 1; i <= 10; i += 1){
       for(int j = 5; j <= 5; j += 5){
           cout << "5 X " << i << " = " << i * j << endl;
       }
       cout << endl;
    }
    
    return 0;
}
// Menampilkan Deret Fibonanci hingga suku ke 10
#include <iostream>
using namespace std;
int main() {
    
    cout << "\n=== Deret Fibonanci suku Ke - 10 ===\n" << endl;
    
    int n = 10, t1 = 0, t2 =1, angka_berikutnya = 0;

    for(int i = 1; i <= 10; i++){
        if(i == 1){
            cout << t1 << " ";
            continue;
        }
        if(i == 2){
            cout << t2 << " ";
            continue;
        }
        angka_berikutnya = t1 + t2;
        t1 = t2;
        t2 = angka_berikutnya;

        cout << angka_berikutnya << " ";
    }
    cout << endl;
    
    return 0;
}
// Menghitung Dan Menampilkan Faktorial

#include <iostream>
using namespace std;

double faktorial (int angka){

    long hasil = 1;
    for (int i = 2; i <= angka; i++){
        hasil *= i;
    }
    return hasil;
}

int main (){
    int angka;
cout << "Masukkan angka: ";
    cin >> angka;

int f = faktorial (angka);
cout << "Bilangan faktorial dari " << angka << " adalah " << f;

return 0;
}

