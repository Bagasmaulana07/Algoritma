#include <iostream>   
#include <cstdlib>    
using namespace std;


float luas(int r) {
    return (3.14 * r * r);
}


float kel(int r) {
    return (3.14 * 2 * r);
}

int main() {
    int j;

    system("cls"); 

    cout << "Masukkan Jari-jari = ";
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j) << endl;

    return 0;
}

