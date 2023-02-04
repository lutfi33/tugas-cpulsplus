#include <iostream>
using namespace std;

int main()
{
    int row, col, cari, i, j;
    bool ketemu  = false;

    cout << "Masukan jumlah data: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Pencataan kualitas beras: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if(j%2==0)
            {
                cout<<"Masukan nilai beras ke-"<<i+1<<" ";
            }
            else if(j%2!=0)
            {
                cout<<"Masukan berat beras ke-"<<i+1<<" ";
            }
            cin >> arr[i][j];
        }
    }
    cout << "The array is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    cout << "Data setelah disortir: " << endl;
    cout << "Nilai Beras | Berat beras: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "     ";
        }
        cout << endl;
    }

    cout<<"Masukkan Berat Beras yang ingin Dicari : ";
    cin>>cari;
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = row;
    while (b_flag == 0 && awal<=akhir)
    {
        tengah = (awal + akhir)/2;
        if(arr[tengah][col] == cari)
        {
            b_flag = 1;
            break;
        }
        else if(arr[tengah][col]<cari)
            awal = tengah + 1;
        else
            akhir = tengah -1;
    }

    if(b_flag == 1)
    {
        cout<<"\nData ditemukan pada index ke-"<<tengah<<endl;
    }
    else
        cout<<"\nData tidak ditemukan\n";
    return 0;
}
