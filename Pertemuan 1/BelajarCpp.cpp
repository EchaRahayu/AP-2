#include <iostream> //header standar c++, conio.h, stdio.h
#include <conio.h> // header untuk getche() dan geth ()
using namespace std;

int main()
{
    string nama; 
    char kom, JenisKelamin;
    int nim;
    float ip;

    cout << "Hello World!!" << endl;

    cout << "Masukkan Nama: ";
    //cin >> nama;
    getline(cin,nama); // agar karakter spasi bisa terbaca
    cout << "Massukkan Kom: ";
    cin >> kom;
    cout << "Massukkan Nim: ";
    cin >> nim;
    cout << "Massukkan Ip: ";
    cin >> ip;
    cout << "Massukkan Jenis Kelamin (L/P): ";
    JenisKelamin = getche(); //agar karakter langsung tampil, dan tidak klik enter

  /* ini untuk output*/
  cout << "\n" << nama << endl;
  cout << nim << endl;
  cout << kom << endl;
  cout << ip << endl;
  //cout << JenisKelamin << endl;
  putchar(JenisKelamin); //untuk menampilkan karakter terkhusus "Jeniskelamin"

} 