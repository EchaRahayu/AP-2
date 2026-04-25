#include <iostream>
using namespace std;

string variabelGlobal = "Teknologi"; //contoh variabel global

void namaVariabel(){
    string variabelLokal = "Komputer"; //contoh variabel lokal

    // coba akses 1
    cout << variabelLokal << endl; // variabelLokal dapat diakses di dalam fungsi namaVariabel
    // coba akses 3
    //cout << variabelGlobal << endl; // variabelGlobal dapat diakses di dalam fungsi namaVariabel
}

int main() {
    namaVariabel();
    // coba akses 2
    //cout << variabelLokal << endl; //gabisa

    // coba akses 4
    //cout << variabelGlobal << endl;
}