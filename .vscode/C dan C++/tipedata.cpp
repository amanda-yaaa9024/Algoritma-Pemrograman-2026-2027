#include <iostream>
#include <string>
using namespace std;

int main() {
    int umur = 18;
    double tinggi = 160.5;
    char kelas = 'A';
    bool aktif = true;
    string nama = "Budi";

    const string KAMPUS = "Universitas Djuanda";

    cout << "int : " << umur << endl;
    cout << "double : " << tinggi << endl;
    cout << "char : " << kelas << endl;
    cout << "bool : " << aktif << endl;
    cout << "string : " << nama << endl;
    cout << "const string : " << KAMPUS << endl;
    return 0;
}