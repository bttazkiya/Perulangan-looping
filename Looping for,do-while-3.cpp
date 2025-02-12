// Looping for, do-while
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