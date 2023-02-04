#include <iostream>



using namespace std;



int main()

{

    string data[100][100]= {{"No","Waktu","Matakuliah"},

    {"1","Senin, 07:30 - 09:00","Pemrograman Web"},

    {"2","Selasa, 12:30 - 14:00","Praktikum Struktur data"},

    {"3","Rabu, 08:00 - 09:00","Struktur Data"},

    {"4","Kamis, 12:00 - 15:00","Sistem Integrasi"},

    {"5","Jumat 09:00 - 10:00","Analisis dan Peracangan Sistem"},

    };



    cout<<endl;

    for(int x = 0; x<10; x++){

        for(int z=0; z<10; z++){

            cout<<data[x][z]<<"    ";

        }

        cout<<endl<<endl;

    }



    return 0;

}


