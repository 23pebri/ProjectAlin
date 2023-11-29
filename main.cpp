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
    cout <<"Bentuk persamaan: "<<endl;
    cout<<a<<"x + "<<b<<"= "<<c<<"\n";
    x1 = c - b;
    x = x1 / a;
    cout<<"hasil dari variabel x adalah "<<x<<endl;
    cout <<"Cek kebenaran: \n";
    cout <<a<<"."<<"("<<x<<")"<<" + "<<b<<" = " << c << endl;
    cout <<a*x <<" + " << b << " = " <<c << endl;
    cout << a*x+b << " = " << c << " (Setara)\n";
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
    int matriks[3][4];
    int D[3][5];
    int X[3][5];
    int Y[3][5];
    int Z[3][5];
    int Det,DetX,DetY,DetZ,x,y,z;
    int a = 1;
    cout << "Mencari Persamaan liner tiga variabel\n";
    cout << "dengan bentuk : " <<endl;
    cout << "a1x + a2y + a3z = a4\na5x + a6y + a7z =a8\na9x + a10y + a11z = a12\n";
    cout<<"========================\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "nilai koefisien a"<<a<<" : ";
            cin >> matriks[i][j];
            a++;
        }
        
    }
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
    cout << "Nilai x = " << x <<" \nNilai y = " << y <<" \nNilai z = " << z;
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
    cout << "<<<<<<<<<<<<<<<<<<<<<< Present by Kelompok 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout << "Anggota:\n 1. Alvi\n 2. Pebri \n 3. Najwa \n 4. Devi\n";
    cout << "   <<<<<<<<<<<<<<<<<<<<<< Thanks for All >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    return 0;
}


