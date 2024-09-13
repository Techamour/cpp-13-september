#include <iostream>
#include <cstdlib>

using namespace std;

int pangkat(int x, int y) {
    if (y != 0)
    return (x * pangkat (x, y-1));
    else
    return 1;
}

int main() {
    int a, n, hasil;
    // Write C++ code here
    cout << "Masukan bilangan dasar: ";
    cin >> a;
    cout << "Masukkan bilangan pangkat(bulat positif): ";
    cin >> n;
    hasil = pangkat(a, n);
    
    cout << "Hasil " << a << "^" << n << " = " << hasil << endl;
    system ("PAUSE");
    return 0;
}