#include <iostream>

using namespace std;

int main()
{
    int data[3][4] = { { 10, 35, 21, 37 },{ 25, 33, 34, 38 },{ 31, 26, 28, 29 }};
    int cari;
    int hasil = 0;
    int kiri = 0;
    int kanan = 4 - 1;
    char lagi;

        cout<<"----------- Data -----------\n";
        cout<<"         Tahun           \n";
        cout<<"   2000      2001      2002          2003\n";
        for(int a=0; a<3; a++)
        {
            for(int b=0; b<4; b++)
            {
                cout<<data[a][b]<<"     |     ";
            }
            cout<<endl;
        }
        cout << "Data yang dicari : ";
        cin >> cari;

        for(int p = 0; p < 3; p++)
        {

            while(kiri <= kanan)
            {
                int tengah = (kiri + kanan) / 2;
                if(data[p][tengah] == cari)
                {
                    hasil = 1;
                    cout << "Data ditemukan pada baris ke-" << p+1 << " dan kolom ke-" << tengah+1 << endl;
                    break;
                }
                else if(data[p][tengah] < cari)
                {
                    kiri = tengah + 1;
                }
                else
                {
                    kanan = tengah - 1;
                }
            }
            if(hasil == 1)
            {
                break;
            }
        }
    if(hasil == 0)
            {
                cout << "Data tidak ditemukan" << endl;
            }

    return 0;
}
