#include <iostream>

using namespace std;

int main()
{
    string barang[3] = {"meja", "kursi", "lemari"};
    int harga[3] = {50000, 40000, 30000};
    int masukan;

    cout<<"Masukan barang yang akan dibeli :"<<endl;
    cout <<"1 = Meja"<<endl;
    cout <<"2 = Kursi"<<endl;
    cout <<"3 = Lemari"<<endl;

    cout<<"Pilih";
    cin >> masukan;

    if (masukan==1){
        cout << "Nama Barang: " << barang[0] << endl;
        cout << "Harga: " << harga[0] << endl;
    }else if (masukan == 2){
        cout << "Nama Barang: " << barang[1] << endl;
        cout << "Harga: " << harga[1] << endl;
    }else if (masukan == 3){
        cout << "Nama Barang: " << barang[2] << endl;
        cout << "Harga: " << harga[2] << endl;
    }else{
        cout <<"Salah input";
    }


    return 0;
}
