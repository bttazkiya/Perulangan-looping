// Looping for, do-while
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