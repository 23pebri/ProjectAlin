#include <iostream>
#include <cstdlib>
using namespace std;

//dekarasi function
void PersSatuVar() {
    //digarap pebri
    int main(){
    int ax,b,c,x,x1;
    cout<<" menggunakan rumus ax + b = c"<<endl;
    cout<<"masukkan nilai ax : ";
    cin>>ax;
    cout<<"masukkan nilai b : ";
    cin>>b;
    cout<<"masukkan nilai c : ";
    cin>>c;
    x1 = c - b;
    x = x1 / ax;
    cout<<"hasil dari X = "<<x<<endl;
   }
}

void PersDuaVar() {
    //digarap alvi
    int x[3],y[3],z[3];
    float hz,hy,hx,hslx,hsly;
    cout<<"Mencari Persamaan Linier Dua Variabel\ndengan bentuk :\n";
    cout<<"x1 + y1 = z1\n";
    cout<<"x2 + y2 = z2\n";
    cout<<"========================\n";
    for(int i=1;i<3;i++)
    {
        cout<<"Masukkan Nilai x"<<i<<" : ";cin>>x[i];
        cout<<"Masukkan Nilai y"<<i<<" : ";cin>>y[i];
        cout<<"Masukkan Nilai z"<<i<<" : ";cin>>z[i];
    }
    cout<<"\nSehingga menjadi :\n";
    cout<<x[1]<<"x + "<<y[1]<<"y = "<<z[1]<<"\n";
    cout<<x[2]<<"x + "<<y[2]<<"y = "<<z[2]<<"\n";
    if(x[1] == x[2])
    {
        int m;
        hy= y[1]-y[2];
        hz= z[1]-z[2];
        hsly= hz / hy;
        m= hsly * y[1];
        hx= z[1]- m;
        hslx= hx / x[1];
    }
    else
    {
        int m,mx,my;
        float n,x1,y1,z1,x2,y2,z2;
        m= x[2] * x[1];
        mx= m / x[1];
        my= m / x[2];
        y1= y[1] * mx;
        z1= z[1] * mx;
        y2= y[2] * my;
        z2= z[2] * my;
        hy= y1-y2;
        hz= z1-z2;
        hsly= hz / hy;
        n= hsly * y[1];
        hx = z[1] -  n;
        hslx= hx / x[1];
    }
    cout<<"\nJawabannya adalah :\n";
    cout<<"Nilai x = "<<hslx<<"\n";
    cout<<"Nilai y = "<<hsly<<"\n";
    
}

void PersTigaVar() {
    //digarap devi dan najwa
}

int main(int argc, char const *argv[])
{   
    system("cls");
    //deklarasi variabel
    int pilihan;
    bool keluar = false;
    string k = "";
    while (keluar == false)
    {
        keluar = false;
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
            system("cls");
            //PersSatuVar();
            while (true)
            {
                cout << "Apakah anda ingin keluar dari program (y/n): ";
                cin >> k;
                if (k == "y" || k == "Y") {
                    keluar = true;
                    break;
                } else if (k == "n" || k == "N")
                {
                    system("cls");
                    break;
                } else {
                    cout << "Jawaban tidak ada dalam opsi";
                }
                system("cls");
            }
            break;
        case 2:
            system("cls");
            PersDuaVar();
            while (true)
            {
                cout << "Apakah anda ingin keluar dari program (y/n): ";
                cin >> k;
                if (k == "y" || k == "Y") {
                    keluar = true;
                    break;
                } else if (k == "n" || k == "N")
                {
                    system("cls");
                    break;
                } else {
                    cout << "Jawaban tidak ada dalam opsi";
                }
                system("cls");
            }
            break;
        case 3:
            //PersTigaVar();
            while (true)
            {
                cout << "Apakah anda ingin keluar dari program (y/n): ";
                cin >> k;
                if (k == "y" || k == "Y") {
                    keluar = true;
                    break;
                } else if (k == "n" || k == "N")
                {
                    system("cls");
                    break;
                } else {
                    cout << "Jawaban tidak ada dalam opsi";
                }
                system("cls");
            }
            break;
        case 4:
            keluar = true;
            break;
        default:
            cout << "Pilihan tidak ditemukan ";
            break;
        }
        system("cls");
    }
    system("cls");
    cout << "<<<<<<<<<<<<<<<<<<<<<< Present by Kelompok 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
    return 0;
}


