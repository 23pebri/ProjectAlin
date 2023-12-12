#include <iostream>
#include <cstdlib>
using namespace std;

//dekarasi function
void PersSatuVar() {
    //digarap pebri
    int a,b,c,x,x1;
    cout<<"Mencari Persamaan Linier Satu Variabel\ndengan bentuk :\nax + b = c\n";
    cout<<"========================\n";
    cout<<"masukkan nilai a : ";
    cin>>a;
    cout<<"masukkan nilai b : ";
    cin>>b;
    cout<<"masukkan nilai c : ";
    cin>>c;
    cout << endl;
    cout <<"Bentuk persamaan: "<<endl;
    cout<<a<<"x + "<<b<<" = "<<c<<"\n";
    x1 = c - b;
    x = x1 / a;
    cout << endl;
    cout<<"Nilai dari variabel x adalah "<<x<<endl;
    cout << endl;
    cout <<"Cek kebenaran: \n";
    cout <<a<<"."<<"("<<x<<")"<<" + "<<b<<" = " << c << endl;
    cout <<a*x <<" + " << b << " = " <<c << endl;
    cout << a*x+b << " = " << c << " ( setara )\n";
    cout << endl;
}


void PersDuaVar() {
    //digarap alvi
    int matriks[2][3];
    int D[2][2];
    int X[2][2];
    int Y[2][2];
    int Det,Detx,Dety,x,y,a = 1;
    cout<<"Mencari Persamaan Linier Dua Variabel\ndengan bentuk :\n";
    cout<<"a1x + a2y = a3\n";
    cout<<"a4x + a5y = a6\n";
    cout<<"========================\n";
    for(int i= 0;i<2;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "masukan nilai a"<<a<<" : ";
            cin >> matriks[i][j];
            a++;
        }
        
    }
    cout << endl;
    cout << "Bentuk persamaan: " << endl;
    cout << matriks[0][0] <<"x + " << matriks[0][1] << "y = " << matriks[0][2] << endl;
    cout << matriks[1][0] <<"x + " << matriks[1][1] << "y = " << matriks[1][2] << endl;
    //Det
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            D[i][j] = matriks[i][j];
        }
    }
    Det = D[0][0]*D[1][1] - D[0][1]*D[1][0];
    //DetX
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            X[i][j] = matriks[i][j];
        }
    }
    X[0][0] = matriks[0][2];
    X[1][0] = matriks[1][2];
    Detx = X[0][0]*X[1][1] - X[0][1]*X[1][0];
    //DetY
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Y[i][j] = matriks[i][j];
        }
    }
    Y[0][1] = matriks[0][2];
    Y[1][1] = matriks[1][2];
    Dety = Y[0][0]*Y[1][1] - Y[0][1]*Y[1][0];
    x = Detx/Det;
    y = Dety/Det;
    cout << endl;
    cout << "Nilai x adalah " << x << " dan \n" ;
    cout << "Nilai y adalah " << y <<endl;
    cout << endl;
    cout << "Cek kebenaran: " << endl; 
    cout << matriks[0][0] <<"(" << x << ") + " <<  matriks[0][1] << "(" << y << ") = " << matriks[0][2] << endl;
    cout << matriks[0][0]*x << " + " <<  matriks[0][1]*y << " = "  << matriks[0][2] << endl;
    cout << matriks[0][0]*x + matriks[0][1]*y << " = "  << matriks[0][2] << " ( setara )\n";
    cout << endl;
}

void PersTigaVar() {
    int matriks[3][4];
    int D[3][5];
    int X[3][5];
    int Y[3][5];
    int Z[3][5];
    int Det,DetX,DetY,DetZ,x,y,z;
    int a = 1;
    cout << "Mencari Persamaan liner tiga variabel\n";
    cout << "dengan bentuk : " <<endl;
    cout << "a1x + a2y + a3z = a4\na5x + a6y + a7z = a8\na9x + a10y + a11z = a12\n";
    cout<<"========================\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "masukan nilai a"<<a<<" : ";
            cin >> matriks[i][j];
            a++;
        }
        
    }
    cout << endl;
    cout << "Bentuk persamaan: \n";
    cout << matriks[0][0] <<"x + " << matriks[0][1] << "y + " <<matriks[0][2] <<"z = "<< matriks[0][3] << endl;
    cout << matriks[1][0] <<"x + " << matriks[1][1] << "y + " <<matriks[1][2] <<"z = "<< matriks[1][3] << endl;
    cout << matriks[2][0] <<"x + " << matriks[2][1] << "y + " <<matriks[2][2] <<"z = "<< matriks[2][3] << endl;
    //Det
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;  j< 3; j++)
        {
            D[i][j] = matriks[i][j];
        }
    }
    D[0][3] = D[0][0];
    D[1][3] = D[1][0];
    D[2][3] = D[2][0];
    D[0][4] = D[0][1];
    D[1][4] = D[1][1];
    D[2][4] = D[2][1];
    Det = D[0][0]*D[1][1]*D[2][2] + D[0][1]*D[1][2]*D[2][3] + D[0][2]*D[1][3]*D[2][4]- D[0][4]*D[1][3]*D[2][2] - D[0][3]*D[1][2]*D[2][1] - D[0][2]*D[1][1]*D[2][0]; 
    //DetX
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;  j< 3; j++)
        {
            X[i][j] = matriks[i][j];
        }
    }
    X[0][0] = matriks[0][3];
    X[1][0] = matriks[1][3];
    X[2][0] = matriks[2][3];
    X[0][3] = X[0][0];
    X[1][3] = X[1][0];
    X[2][3] = X[2][0];
    X[0][4] = X[0][1];
    X[1][4] = X[1][1];
    X[2][4] = X[2][1];
    DetX = X[0][0]*X[1][1]*X[2][2] + X[0][1]*X[1][2]*X[2][3] + X[0][2]*X[1][3]*X[2][4]- X[0][4]*X[1][3]*X[2][2] - X[0][3]*X[1][2]*X[2][1] - X[0][2]*X[1][1]*X[2][0];
   //Det Y
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;  j< 3; j++)
        {
            Y[i][j] = matriks[i][j];
        }
    }
    Y[0][1] = matriks[0][3];
    Y[1][1] = matriks[1][3];
    Y[2][1] = matriks[2][3];
    Y[0][3] = Y[0][0];
    Y[1][3] = Y[1][0];
    Y[2][3] = Y[2][0];
    Y[0][4] = Y[0][1];
    Y[1][4] = Y[1][1];
    Y[2][4] = Y[2][1];
    DetY = Y[0][0]*Y[1][1]*Y[2][2] + Y[0][1]*Y[1][2]*Y[2][3] + Y[0][2]*Y[1][3]*Y[2][4]- Y[0][4]*Y[1][3]*Y[2][2] - Y[0][3]*Y[1][2]*Y[2][1] - Y[0][2]*Y[1][1]*Y[2][0];
   //Det Z
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;  j< 3; j++)
        {
            Z[i][j] = matriks[i][j];
        }
    }
    Z[0][2] = matriks[0][3];
    Z[1][2] = matriks[1][3];
    Z[2][2] = matriks[2][3];
    Z[0][3] = Z[0][0];
    Z[1][3] = Z[1][0];
    Z[2][3] = Z[2][0];
    Z[0][4] = Z[0][1];
    Z[1][4] = Z[1][1];
    Z[2][4] = Z[2][1];
    DetZ = Z[0][0]*Z[1][1]*Z[2][2] + Z[0][1]*Z[1][2]*Z[2][3] + Z[0][2]*Z[1][3]*Z[2][4]- Z[0][4]*Z[1][3]*Z[2][2] - Z[0][3]*Z[1][2]*Z[2][1] - Z[0][2]*Z[1][1]*Z[2][0];
    x = DetX/Det;
    y = DetY/Det;
    z = DetZ/Det;
    cout << endl;
    cout << "Nilai dari variabel x adalah " << x <<"\nNilai dari variabel y adalah " << y <<" dan \nNilai dari variabel z adalah " << z << endl;
    cout << endl;
    cout << "Cek kebenaran: " << endl;
    cout << matriks[0][0] <<"(" << x << ") + " <<  matriks[0][1] << "(" << y << ") + " << matriks[0][2] << "("<<z<<") = "<< matriks[0][3] << endl;
    cout << matriks[0][0]*x << " + " <<  matriks[0][1]*y << " + "  << matriks[0][2]*z << " = "<< matriks[0][3] << endl;
    cout << matriks[0][0]*x + matriks[0][1]*y + matriks[0][2]<< " = "  << matriks[0][3] << " ( setara )\n";
    cout << endl;
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
        cout << "=================================" << endl;
        cout << "     Sistem Persamaan Linier " << endl;
        cout << "=================================" << endl;
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
            system("cls");
            PersSatuVar();
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
            system("cls");
            PersTigaVar();
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
    cout << "<<<<<<<<<<<<<<<<<<<<<< Present by Kelompok 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout << "Anggota:\n 1. Alvi\n 2. Pebri \n 3. Najwa \n 4. Devi\n";
    cout << "<<<<<<<<<<<<<<<<<<<<<< Thanks full for My Self >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    return 0;
}


