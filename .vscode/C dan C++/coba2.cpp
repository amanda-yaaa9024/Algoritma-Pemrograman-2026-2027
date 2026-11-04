#include <iostream>
#include <string>
using namespace std;

int main() {
    string nm1, nm2;

    cout << "Masukkan nama pertama: ";
    getline(cin, nm1); // sebaris penuh, pengganti gets()
    cout << "Masukkan nama kedua: ";
    cin >> nm2; // cuma sati kata, sama kayak scanf("%s")

    cout << "Selamat Datang " << nm1 << '\n';
    cout << "Selamat Datang " << nm2 << '\n';
}