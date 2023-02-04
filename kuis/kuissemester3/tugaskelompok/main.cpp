#include <iostream>

using namespace std;

int main()
{
    int temp, cari, data;
    int total =0;
    int beras[100];

    struct{
        string name;
        string kode_kerja;
        string tanggal;

    }data_karyawan;

    cout<<"Masukan Identitas Karyawan"<<endl;
    cout<<"Nama :";
    cin>>data_karyawan.name;
    cout<<"Kode  Kerja:";
    cin>>data_karyawan.kode_kerja;
    cout<<"Tanggal:";
    cin>>data_karyawan.tanggal;


    cout<<"Masukkan jumlah data yang ingin dimasukkan :";
    cin>>data;

    for(int i=0; i<data; i++)
    {
        cout<<"Berat Beras /kg ke "<<i+1<<" :";
        cin>>beras[i];
        total += beras[i];
    }

    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Penginputan Data Dilakukan oleh :"<<endl;
    cout<<"Nama : "<<data_karyawan.name<<endl;
    cout<<"Kode  Kerja:"<<data_karyawan.kode_kerja<<endl;
    cout<<"Tanggal:"<<data_karyawan.tanggal<<endl;
    cout<<"-------------------------------------------------------\n"<<endl;


    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Total Berat "<<total<<" Kg"<<endl;
    cout<<"-------------------------------------------------------\n"<<endl;
    cout<<"\nHasil Pendataan Berat Beras Sebelum Diurutkan"<<endl;
    for(int i=0; i<data; i++)
    {
        cout<<i+1<<"."<<beras[i]<<" kg"<<endl;
    }

    for(int i = 0; i<data; i++)
    {
        for(int j = i+1; j<data; j++)
        {
            if(beras[j] < beras[i])
            {
                temp = beras[i];
                beras[i] = beras[j];
                beras[j] = temp;
            }
        }
    }
    cout<<"\nHasil Pendataan Berat Beras Setelah Diurutkan"<<endl;
    for(int i=0; i<data; i++)
    {
        cout<<i+1<<"."<<beras[i]<<" kg"<<endl;
    }
    cout<<endl;

   cout<<"Masukkan Berat Beras yang ingin Dicari : ";
    cin>>cari;
    int awal, akhir, tengah, hasil = 0;
    awal = 0;
    akhir = data;
    while (hasil == 0 && awal<=akhir)
    {
        tengah = (awal + akhir)/2;
        if(beras[tengah] == cari)
        {
            hasil = 1;
            break;
        }
        else if(beras[tengah]<cari)
            awal = tengah + 1;
        else
            akhir = tengah -1;
    }

    if(hasil == 1){
        cout<<"\nData ditemukan pada index ke "<<tengah<<" atau baris ke "<<tengah+1<<endl;
    }else
        cout<<"\nData tidak ditemukan\n";
return 0;
}
