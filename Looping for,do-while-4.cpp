// Looping for, do-while
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