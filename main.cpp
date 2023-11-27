#include <iostream>
#include <cstdlib>
using namespace std;

//dekarasi function
int PersSatuVar() {
    //digarap pebri

}
int PersDuaVar() {
    //digarap alvi
    //ax + by = c
    //dx + ey = f
    int x1,x2,y1,y2,a,b,c,d,e,f;
    cout << "ax1 + by1 = c" << endl;
    cout << "dx2 + ey1 = f" << endl;
    cout << "masukan nilai dari x1 : ";
    cin >> x1;
    cout << "masukan nilai dari a : ";
    cin >> a;
    cout << "masukan nilai dari y1 : ";
    cin >> y1;
    cout << "masukan nilai dari b : ";
    cin >> b;
    cout << "masukan nilai dari c : ";
    cin >> c;

    cout << "masukan nilai dari x2 : ";
    cin >> x2;
    cout << "masukan nilai dari d : ";
    cin >> d;
    cout << "masukan nilai dari y2 : ";
    cin >> y2;
    cout << "masukan nilai dari e : ";
    cin >> e;
    cout << "masukan nilai dari f : ";
    cin >> f;

}
int PersTigaVar() {
    //digarap devi dan najwa
}

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
        cout << "1. Persamaan Liner Satu Variabel alin ke satu" << endl;
        cout << "2. Persamaan Liner Dua Variabel" << endl;
        cout << "3. Persamaan Liner Tiga Variabel oke" << endl;
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


