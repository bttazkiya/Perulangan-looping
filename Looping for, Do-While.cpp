// Looping for, do-while
// Menampilkan Nilai dari 1 sampai 20
#include <iostream>
using namespace std;
int main () {

    cout << "\n=== Nilai  dari 1 sampai 20 ===\n" << endl;
    for(int i = 1; i <= 20; i++){
        cout << i << endl;
    }
    return 0;
}
// Menampilkan karakter A sampai Z
#include <iostream>
using namespace std;
int main() {

    char c;

    cout << "\n === Karakter A sampai Z === \n" << endl;
    for (c = 'A'; c <= 'Z'; ++c){
        cout << c << endl;
    }   
    return 0;
}
// Mencari Total angka (Perulangan While)
#include <iostream>
using namespace std;
int main () {
    char ulangi = 'y';
    int total = 0, bilangan;

    // perulangan while
    while(ulangi == 'y'){
        cout << "Masukkan Bilangan: ";
        cin >> bilangan;
        total == bilangan;

        cout << "Mau Memasukkan Data lagi?\n";
        cout << "Jawab (y/t): ";
        cin >> ulangi;
    }

    cout << "\n\n----------\n";
    cout << "Perulangan Selesai!\n";
    cout << "Total Bilangan: " << total;
    
    return 0;
}
// Menampilkan Bilangan Ganjil 1 - 30 kecuali kelipatan 3
#include <iostream>
using namespace std;
int main () {

    cout << "\n=== Bilangan Ganjil dari 1 sampai 30 ===\n" << endl;
    for(int a = 1; a <= 30; a++){
       if(a%2 != 0){
        if(a%3 == 0){
            continue;
        }
        cout << a << endl;
       }
    }
    return 0;
}
// menampilkan bilangan ganjil kecuali kelipatan 7 dan 11 mulai dari 1 sampai <n atau bilangan tersebut <100
#include <iostream>
using namespace std;
int main () {
    
    for (int i = 1; i <=100; i++){
        if (i%2 !=0 && i%7 !=0 && i%11 !=0){
        cout << i << " " << endl;
        }
    }
  
    return 0;
}