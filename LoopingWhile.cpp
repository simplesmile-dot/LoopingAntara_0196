#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;

    srand(time(0)); // Seed untuk random number generator

    // Perulangan dengan WHILE
    cout << "Perulangan WHILE " << endl;
    //Nilai awal x = 1
    x = 1 + rand() % 10; // Menghasilkan nilai acak antara 1 hingga 10

    while (x <= 5) {
        cout << "TI, Bilangan acak = " << x << endl;
        x = rand() % 10; // Penngubah dari nilai x
    }

    cout << "Bilangan acak while yang terakhir = " << x << endl;
    cout << endl;

    return 0;
}