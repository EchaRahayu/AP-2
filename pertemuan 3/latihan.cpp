#include <iostream>
using namespace std;
 int main() {
    float berat, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg) : ";
    cin >> berat;

    cout << "Masukkan tinggi badan anda (m): ";
    cin >> tinggi;
    
    bmi = berat / (tinggi*tinggi);
    
    cout << "BMI anda: " << bmi << endl;

    if(bmi < 18.5){
        cout << "Kategori anda: Berat badan kurang";
    }
    else if(bmi >= 18.5 && bmi < 25){
        cout << "Kategori anda: Berat anda normal";
    }
    else if(bmi >= 25 && bmi < 30){
        cout << "Kategori anda: Berat anda berlebih";
    }
    else{
        cout << "Kategori anda: Obesitas";
    }
 }