#include <iostream>
#include <cstdlib>
using namespace std;

//dekarasi function
int PersSatuVar() {
    
}
int PersDuaVar();
int PersTigaVar();

int main(int argc, char const *argv[])
{
    //deklarasi variabel
    int pilihan;
    bool keluar = false;

    while (keluar == false)
    {
        cout << "===============================" << endl;
        cout << "     Sistem Persamaan Linier " << endl;
        cout << "===============================" << endl;
        cout << "1. Persamaan Liner Satu Variabel" << endl;
        cout << "2. Persamaan Liner Dua Variabel" << endl;
        cout << "3. Persamaan Liner Tiga Variabel" << endl;
        cout << "4. Keluar" << endl;
        cout << endl;
        cout << "Pilih Menu (1/2/3/4): ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            //PersSatuVar();
            break;
        case 2:
            //PersDuaVar();
            break;
        case 3:
            //PersTigaVar();
            break;
        case 4:
            keluar = true;
            break;
        default:
            cout << "Pilihan tidak ditemukan ";
            break;
        }
    }
    system("cls");
    return 0;
}

int PersSatuVar () {
    
}