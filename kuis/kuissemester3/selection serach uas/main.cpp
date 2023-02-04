#include <iostream>

using namespace std;

int main()
{
    int col = 2;
    int panjang =3;
    int idx_kecil;
    string temp;
    string data[3][3] = {{"Sedan", "2020", "2000"},{"MPV", "2020", "2300"},{"SUV", "2020", "1750"}};

    cout << "Data Utama:" << endl;
    cout << "Jenis   |   Tahun    |   Penjualan" << endl;
    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            cout << data[i][j]<<"     |     ";
        }
        cout << endl;
    }


    for (int y = 0; y < panjang - 1; y++)
    {
        idx_kecil = y;
        for (int j = y + 1; j < panjang; j++)
        {
            if (data[j][col] < data[idx_kecil][col])
            {
                idx_kecil = j;
            }
        }
        if (idx_kecil != y)
        {
            for (int k = 0; k < panjang; k++)
            {
                temp = data[y][k];
                data[y][k] = data[idx_kecil][k];
                data[idx_kecil][k] = temp;
            }
        }
    }

    cout << "\nData Di Urutkan :" << endl;
    cout << "Jenis   |   Tahun    |   Penjualan" << endl;
    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            cout << data[i][j]<<"     |     ";
        }
        cout << endl;
    }
    return 0;
}
