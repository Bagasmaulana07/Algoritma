#include <iostream>
#include <cstring>    
#include <cstdlib>     
using namespace std;


void coment(char ket[30], int n);

int main() {
    char lagi;
    char c[30];
    int i;

    do {
        system("cls"); 
        
        cout << "Masukkan nilai = ";
        cin >> i;

        coment(c, i);  

        cout << c << endl;

        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}


void coment(char ket[30], int n) {
    if (n % 2 == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}

