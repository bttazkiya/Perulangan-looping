// menampilkan tabel perkalian 5 dari 1 X 5 sampai 10 X 5
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