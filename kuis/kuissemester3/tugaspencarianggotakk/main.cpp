#include <iostream>

using namespace std;

int main()
{
    string name[10];
    string address[10];
    int nik[10];
    char goldarah[10];
    char data;
    int i, masuknik;

    cout<<"Jumlah Input Data";
    cin>>i;
    cout<<endl;
    for(int p=0; p<i; p++)
    {
        for()
        cout<<"Masukan NIK:";
        cin>>nik[p];
        cout<<"Masukan nama: ";
        cin>>name[p];
        cout<<"Masukan Alamat: ";
        cin>>address[p];
        cout<<"Masukan Golongan Darah: ";
        cin>>goldarah[p];
        cout<<endl;

    }

    cout<<"Cari data anggota keluarga : ";
    cin>>data;
    if(data == 'y' || data == 'Y')
    {
        cout<<"Masukan NIK: ";
        cin>>masuknik;

        for(int y=0; y<i; y++)
        {
            if (masuknik == nik[y]){
            cout<<"Masukan nama: ";
            cin>>name[y];
            cout<<"Masukan Alamat: ";
            cin>>address[y];
            cout<<"Masukan Golongan Darah: ";
            cin>>goldarah[y];
            cout<<endl;
            }
        }
    }

    cout<<"\n\n Data Anggota keluarga: "<<endl;
    for(int hasil; hasil<i; hasil++){
        if(hasil < i){
            cout<<"Nama : "<<name[hasil]<<endl;
            cout<<"Nik : "<<nik[hasil]<<endl;
            cout<<"Alamat : "<<address[hasil]<<endl;
            cout<<"Golongan Darah : "<<goldarah[hasil]<<endl;
        }else{
            cout<<"data tidak ketemu"<<endl;
        }
    }
    return 0;
}
