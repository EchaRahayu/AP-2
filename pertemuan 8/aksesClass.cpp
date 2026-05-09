#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;
    
    protected:
        int protectedVar;

    public:
        int publicVar;

    // Constractor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() {
        cout << "Akses dari dalam class: " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// Inherintance (pewarisan), class turunan
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        // cout << privateVar << endl; // error
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main() {
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\n Akses dari luar class: " << endl;
    // cout << obj.privateVar << endl; // error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout << "\n Akses dari class turunan: " << endl;
    Turunan tur;
    tur.aksesProtected();    

return 0;
}
