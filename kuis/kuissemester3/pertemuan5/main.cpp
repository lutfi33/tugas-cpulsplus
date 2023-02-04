#include <iostream>

using namespace std;

int main()
{
    int jumlah;
    string mahasiswa[100][4];
    string nama;

    cout<<"Masukan Jumlah Data Mahasiswa: ";
    cin>>jumlah;
    cin.ignore(); //untuk pindah baris untuk cin

    for(int a=0; a<jumlah; a++)
    {
        cout<<"Masuka Nama: ";
        getline(cin, mahasiswa[a][0]);
    }
    for(int a=0; a<jumlah; a++)
    {
        cout<<"Masuka Alamat: "<<mahasiswa[a][0]<<": ";
        getline(cin, mahasiswa[a][1]);
    }
    for(int a=0; a<jumlah; a++)
    {
        cout<<"Masuka Nik: "<<mahasiswa[a][0]<<": ";
        getline(cin, mahasiswa[a][2]);
    }
    for(int a=0; a<jumlah; a++)
    {
        cout<<"Masuka Golongan Darah: "<<mahasiswa[a][0]<<": ";
        getline(cin, mahasiswa[a][3]);
    }
    cout<<"\n\n Data Yang Anda Masukan"<<endl;
    for(int a =0; a< jumlah; a++){
        cout<<"Nama :"<<mahasiswa[a][0]<<"alamat : " << mahasiswa[a][1]<<endl;
        cout<<"Nik :"<<mahasiswa[a][2]<<"Golongan Darah : " << mahasiswa[a][3]<<endl;
    }

    cout<<"\n\n Masukan nama mahasiswa:";
    getline(cin, nama);
    for(int a =0; a< 5; a++){
        if(mahasiswa[a][0]== nama){
            cout<<"Data Ditemukan"<<endl;
            cout<<"Nama : "<<mahasiswa[a][0]<<endl;
            cout<<"Alamat : "<<mahasiswa[a][1]<<endl;
            cout<<"Nik : "<<mahasiswa[a][2]<<endl;
            cout<<"Golongan Darah : "<<mahasiswa[a][3]<<endl;
        }
    }
    return 0;
}
