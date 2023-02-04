#include <iostream>
//#include <windows.h>
using namespace std;

int cek = 0, kloter;
int data_antrian[4];
int cari;
int arr[100][100];
int tambah=0;
string pegawai;
struct karyawan
{
    string data_pegawai[4];
};
karyawan pgw;

int main()
{
    int hasil=0;
    char pengecekan;
    int temp;
    int data, hapus;
    int pil;

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"     SISTEM PENGINPUTAN BARANG PERGUDANGAN PENGOLAHAN\n";
    cout<<"                       DATA DI BULOG                 "<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"===================================================="<<endl;
    cout<<"     1. Tambah data antrian"<<endl;
    cout<<"     2. Hapus data antrian"<<endl;
    cout<<"     3. Lihat data antrian"<<endl;
    cout<<"     4. Riwayat Akses Terakhir"<<endl;
    cout<<"     5 Keluar"<<endl;
    cout<<"====================================================\n"<<endl;
    cout<<"     Silahkan masukkan pilihan anda : ";
    cin>>pil;
    cin.ignore();
    //pengkondisian
    switch(pil)
    {
    case 1:
        if(cek==4)
        {
            cout<<"     Kosong\n";
            cout<<"\n\n--------------\n";
        }
        else
        {
            cout<<"     DATA PEGAWAI\n";
            cout<<"     Nama : ";
            getline(cin, pegawai);

            pgw.data_pegawai[tambah]=pegawai;
            tambah++;

            cout<<"     -------------------------------\n\n";
            cout<<"     Masukkan jumlah Kloter = ";
            cin>>kloter;
            cin.ignore();
            cout<<"     Masukkan jumlah Barang = ";
            cin>>data;
            cout<<"     -------------------------------\n\n";

            data_antrian[cek]=kloter;
            cek++;
            //input data
            for (int i = 0; i < kloter; i++)
            {
                for (int j = 0; j < data; j++)
                {
                    cout<<"     Kloter ke-"<<i+1<<" kode barang ke-"<<j+1<<" : ";
                    cin >> arr[i][j];
                }
                cout<<endl;
            }

            cout<<"     Berikut data yang anda masukan :\n";
            for (int i = 0; i < kloter; i++)
            {
                cout<<"\n     --------------------------"<<endl;
                cout<<"     Kloter "<<i+1<<endl;
                cout<<"     --------------------------"<<endl;
                for (int j = 0; j < data; j++)
                {
                    cout<<"\n     Kode barang ke- "<<j+1<<" = "<< arr[i][j] << " \n";
                }
                cout << endl;
            }
            system("pause");
            system("cls");
            //pengurutan bubble short
            for (int i = 0; i < kloter; i++)
            {
                for (int j = 0; j < data; j++)
                {
                    for (int k = 0; k < data - 1; k++)
                    {
                        if (arr[i][k] > arr[i][k + 1])
                        {
                            temp = arr[i][k];
                            arr[i][k] = arr[i][k + 1];
                            arr[i][k + 1] = temp;
                        }
                    }
                }
            }
            cout << "\n\n     Data yang telah diurutkan: " << endl;
            for (int i = 0; i < kloter; i++)
            {
                cout<<"\n     --------------------------"<<endl;
                cout<<"     Kloter "<<i+1<<endl;
                cout<<"     --------------------------"<<endl;
                for (int j = 0; j < data; j++)
                {
                    cout<<"\n     Kode barang ke- "<<j+1<<" = "<< arr[i][j] << " \n";
                }
                cout << endl;
            }
            cout<<"     Apakah anda ingin melakukan pengecekan data? (Y/N) : ";
            cin>>pengecekan;
            //pengecekan
            if(pengecekan == 'y' || pengecekan == 'Y')
            {
                cout<<"\n\n     Cari Kode = ";
                cin>>cari;
                cout<<"     Data Tersedia di: \n";
                //pencarian sequintial search
                for(int a = 0; a < kloter; a++)
                {
                    for(int b = 0; b < data; b++)
                    {
                        if(arr[a][b]==cari)
                        {
                            cout<<"     Kloter "<<a+1<<endl;
                            hasil+=1;
                        }
                    }
                }

                if(hasil!=0)
                {
                    cout<<"     Kode barang "<<cari<<" berjumlah "<<hasil<<"\n\n";
                }
                else
                {
                    cout<<"     Data tidak ditemukan"<<endl;
                }
            }
            else
                system("cls");
                main();
        }

        main();
    case 2:
        if(cek==0)
        {
            cout<<"     Data Kosong "<<cek;
            cout<<"\n\n     --------------\n";
        }
        else
        {
            hapus=data_antrian[0];
            for(int a=0; a<cek; a++)
            {
                data_antrian[a]=data_antrian[a+1];
            }
            cek--;
            cout<<"\n     kloter ke "<<hapus<<" Terhapus \n";


            for(int b=0; b<tambah; b++)
            {
                pgw.data_pegawai[b]=pgw.data_pegawai[b+1];
            }
            tambah--;
            main();
        }
    case 3:
        if(cek==0)
        {
            cout<<"\n\n     --------------\n";
            cout<<"     Kosong";
            cout<<"\n     --------------\n";
            main();
        }
        else
        {
            system("cls");
            cout<<endl;
            cout<<"     ----------------------------------\n";
            cout<<"                 Data Kloter\n";
            cout<<"     ----------------------------------\n";
            for(int b=0; b<cek; b++)
            {

                cout<<"     Data ke- "<<b+1<<" nilai : ";
                cout<<data_antrian[b]<<"  "<<"kloter";
                cout<<" | ";
                cout<<"     Alamat di Memori nya adalah :"<<&data_antrian[b]<<endl<<endl;


            }
            main();
        }
    case 4 :
        system("cls");
        cout<<"     -----------------------------\n";
        cout<<"                 RIWAYAT\n";
        cout<<"     -----------------------------\n";
        if(tambah==0){
            cout<<"     data kosong\n\n";
        }
        for(int a=0; a<tambah; a++)
        {
            cout<<"     Akses terakhir oleh admin : "<<pgw.data_pegawai[a]<<endl;
            cout<<endl;
        }
        main();
    case 5:
        exit(0);
        break;
    default:
        cout<<"     Pilihan Tidak Ada"<<endl;
        break;
    }
}
