#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int detail_barang[100][100], temp,k;
    int masukan;

    cout<<"Aplikasi Pergudangan Kebutuhan Logistik"<<endl;
    cout<<"Masukan Jumlah Barang :";
    cin>>masukan;

    for(int a=0; a<masukan; a++)
    {
        cout << "Tanggal masuk barang ke-"<<a+1<< ":";
        cin>>detail_barang[a][0];
    }
    for(int a=0; a<masukan; a++)
    {
        cout << "Jumlah beras barang ke-"<<a+1<< ":";
        cin>>detail_barang[a][1];
    }
    for(int a=0; a<masukan; a++)
    {
        cout << "Berat beras barang ke-"<<a+1<< ":";
        cin>>detail_barang[a][2];
    }
    for(int a=0; a<masukan; a++)
    {
        cout << "Kode beras barang ke-"<<a+1<< ":";
        cin>>detail_barang[a][3];
    }

    cout<<"\n\n Hasil Data yang Masuk"<<endl;
    cout<<"Tanggal Masuk | Jumlah beras | Berat beras |  Kode beras"<<endl;
    for(int a =0; a<masukan; a++)
    {
        cout<<detail_barang[a][0]<<"                    ";
        cout<<detail_barang[a][1]<<"                    ";
        cout<<detail_barang[a][2]<<"                    ";
        cout<<detail_barang[a][3]<<"                    ";
        cout<<endl;
    }

    for(int i=0; i<masukan; i++)
    {
        for(k<masukan-1; k>=0; k-- )
        {
            if(detail_barang[k][0]<detail_barang[k-1][0])
            {
                temp = detail_barang[k][0];
                detail_barang[k][0]=detail_barang[k-1][0];
                detail_barang[k-1][0]= temp;
            }
        }

    }


    cout<<"\n\n Hasil Data setelah diurutkan"<<endl;
    cout<<"Tanggal Masuk | Jumlah beras | Berat beras |  Kode beras"<<endl;
    for(int a =0; a<masukan; a++)
    {
        cout<<detail_barang[a][0]<<"                    ";
        cout<<detail_barang[a][1]<<"                    ";
        cout<<detail_barang[a][2]<<"        ";
        cout<<detail_barang[a][3]<<"        ";
        cout<<endl;
    }
    return 0;
}
