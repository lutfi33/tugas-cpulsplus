#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
    int jumlah;
    struct
    {
        int jml_telinga[8];
        string warna[8];
        string bentuk[8];
    } telinga;

    struct
    {
        int jumlah[8];
        string warna[8];
        string suara[8];
        string bentuk[8];
    } mulut;

    cout<<"Masukan jumlah perulangan data : ";
    cin>>jumlah;
    cout<<endl;

    for(int a=0; a<jumlah;  a++)
    {
        cout<<"Spesifikasi telinga singa ke "<<a+1<<endl;
        cout <<"Jumlah Telinga : ";
        cin >>telinga.jml_telinga[a];
        cout <<"Warna telinga : ";
        cin >>telinga.warna[a];
        cout <<"Bentuk Telinga : ";
        cin >>telinga.bentuk[a];

        cout<<"\n\n Spesifikasi Mulut Singa ke "<<a+1<<endl;
        cout <<"Jumlah Mulut : ";
        cin >>mulut.jumlah[a];
        cout <<"Warna Mulut : ";
        cin >>mulut.warna[a];
        cout <<"Bentuk Mulut : ";
        cin >>mulut.bentuk[a];
        cout<<endl;

    }

    system("cls");
    for(int b=0; b<jumlah; b++){
        cout<<"============================================"<<endl;
        cout<<"\n\nHasil Spesifikasi Telinga singa ke "<<b+1<<endl;
        cout<<"Jumlah Telinga : "<<telinga.jml_telinga[b]<<endl;
        cout<<"Warna Telinga : "<<telinga.warna[b]<<endl;
        cout<<"Bentuk Telinga : "<<telinga.bentuk[b]<<endl;

        cout<<"\n\nHasil Spesifikasi Mulut singa ke "<<b+1<<endl;
        cout<<"Jumlah Mulut : "<<mulut.jumlah[b]<<endl;
        cout<<"Warna Mulut : "<<mulut.warna[b]<<endl;
        cout<<"Bentuk Mulut : "<<mulut.bentuk[b]<<endl;
        cout<<"============================================"<<endl;
    }

    return 0;
}
