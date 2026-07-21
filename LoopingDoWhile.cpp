#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;

    srand(time(0));

    // Perulangan dengan DO... WHILE (Minimal 1x dikerjakan)
    cout << "Perulangan DO... WHILE " << endl;
    //Nilai awal x = 1
    x = 1 + rand() % 10;

    do {
        cout << "TI, Bilangan acak = " << x << endl;
        x = rand() % 10; // Pengubah nilai x
    } while (x <= 5); // Syarat

    cout << "Bilangan acak do-while yang terakhir = " << x << endl;
    cout << endl;

    return 0;
}