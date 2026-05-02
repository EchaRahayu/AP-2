#include <iostream>
using namespace std;

// fungsi untuk pointer sebagai parameter
void ubahNilai(int *p) { // p menerima alamat x isi nya adlah 5
    *p = 20; // *p = 20 --> ubah isi alamat  
}

int main() {
    system("CLS");

    // 1. Pointer dalam Pointer
    cout << "=== Pointer dalam Pointer ===" << endl;
    int a = 64; // varooiabel biasa
    int *p = &a; // pointer ke a
    int **pp = &p; // pointer ke pointer p

    cout << "Nilai a: " << a << endl; // 10
    cout << "Nilai *p: " << *p << endl; // isi alamat a = 64
    cout << "Nilai **pp: " << **pp << endl; // isi pointer p


    // 2. Pointer dalam Array
    cout << "=== Pointer dalam Array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1: " << *ptr << endl; // array[0] --> 1
    cout << "Elemen 2: " << *(ptr + 1) << endl; // array[1] --> 2
    cout << "Elemen 3: " << *(ptr + 2) << endl; // array[2] --> 3


    // 3. Pointer dalam String
    cout << "=== Pointer dalam String ===" << endl;
    
    char *organisasi = "Ilmu Komputer Laboratory Center";
    cout << "Awal: " << organisasi << endl;

    organisasi += 5; // geser pointer 
    cout << "Geser: " << organisasi << endl; // setelah +5 --> mulai dari k


    // 4. Pointer sebagai Parameter
    cout << "=== Pointer sebagai Parameter ===" << endl;

    int x = 5;
    cout << "Sebelum: " << x << endl;

    ubahNilai(&x);
    cout << "Sesudah: " << x << endl;

    return 0;
}