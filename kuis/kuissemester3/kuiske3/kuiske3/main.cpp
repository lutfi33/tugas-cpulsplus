#include <iostream>

using namespace std;

int main()
{
    int jumlahbeli,totalharga=0,kembalian,uang,harga_asli=0,ulangi=1,bayar,harga, beli=0,total_pembayaran;
    string makan[5]= {"Seblak","Mie rebus","Ayam goreng","Pecel lele","Ikan bakar"};
    string chekout;
    char lagi='Y', nama_makanan;
    int hasil_diskon;


    cout<<" --------------------------------------------------"<<endl;
    cout<<"              Menu Makanan               "<<endl;
    cout<<" --------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"KD:S Seblak.......................Rp 15.000  "<<endl;
    cout<<"KD:M Mie rebus....................Rp 10.000"<<endl;
    cout<<"KD:A Ayam Goreng..................Rp 20.000"<<endl;
    cout<<"KD:P Pecel Lele...................Rp 15.000"<<endl;
    cout<<"KD:I Ikan Bakar...................Rp 30.000"<<endl;
    cout<<" -------------------------------------------------- "<<endl<<endl;



    while(lagi=='Y' || lagi=='y')
    {
        cout<<"Masukan kode makanan    : ";
        cin>>nama_makanan;

        if(nama_makanan=='S' || nama_makanan=='s')
        {
            chekout= makan[0];
            harga=15000;
        }
        else if(nama_makanan=='M' || nama_makanan=='m')
        {
            chekout=makan[1];
            harga=10000;
        }
        else if(nama_makanan=='A' || nama_makanan=='a')
        {
            chekout=makan[2];
            harga=20000 ;
        }
        else if(nama_makanan=='P' || nama_makanan=='p')
        {
            chekout=makan[3];
            harga=15000 ;
        }
        else if(nama_makanan=='I' || nama_makanan=='i')
        {
            chekout=makan[4];
            harga=30000;
        }
        else
        {
            cout<<"Makanan Tidak Tersedia"<<endl<<endl;
            cout<<"---------------------"<<endl;
        }


        cout<<"Nama Makanan             : "<<chekout<<endl;
        cout<<"Harga Makanan            : "<<harga<<endl;


        cout<<"jumlah Beli              : ";
        cin>>(jumlahbeli);
        cout<<endl;

        bayar=harga*jumlahbeli;
        harga_asli=harga_asli+bayar;

            cout<<"Ada menu lagi? Y/T  : ";
        cin>>lagi;

        ulangi++;

    }

        cout<<"---------------------------------------------------"<<endl;
        cout<<"        Hasil Transakasi        "<<endl;
        cout<<"---------------------------------------------------"<<endl;

        if(harga_asli>=50000)
        {
            hasil_diskon=harga_asli*0.1;
        }else{
            hasil_diskon=0;
        }

        total_pembayaran=harga_asli-hasil_diskon;


        cout<<"Total Harga                   :"<<harga_asli<<endl;

    {



        cout<<"Diskon 10% min pembelian 50000 :"<<hasil_diskon<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Uang yang harus dibayarkan      :"<<total_pembayaran<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"Uang dari pembeli                :";
        cin>>uang;

        kembalian=uang-total_pembayaran;
        cout<<"Uang Kembalian                  :"<<kembalian<<endl;

        cout<<"=================================================="<<endl;


    }
    return 0;
}
