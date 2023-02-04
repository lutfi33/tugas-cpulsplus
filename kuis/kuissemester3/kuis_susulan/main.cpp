#include <iostream>

using namespace std;

int main()
{
    int data[100][100];
    int jml, nim;

    cout<< "FORM PENGISIAN NIM MAHASISWA"<<endl;
    cout << "Masukan jumlah baris : ";
    cin>>jml;
    cout << "Masukan  jumlah kolom : ";
    cin>>nim;
    for(int a=0; a<jml; a++)
    {
        for(int b=0; b<nim; b++)
        {
            cout<<"     Masukan nim ke baris "<<a+1<<" dan kolom ke- :"<<b+1<<" ";
            cin >> data[a][b];
        }
        cout<<endl;
    }

    for(int c=0; c<jml; c++)
    {
        for(int d=0; d<nim; d++)
        {
            cout<<"     Nim anda adalah ke baris "<<c+1<<" dan kolom ke "<<d+1<<" : "<<data[c][d]<<endl;
        }
        cout<<endl;
    }
    return 0;
}

//NAMA : LUTFI HERMANSAH
//NIM : 212520043
//KELAS : TI A
//KUIS SUSULAN PERULANGAN
