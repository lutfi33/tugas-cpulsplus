#include <iostream>

using namespace std;


string input[100],nama[100];
int jml, i;

cout << "Input jumlah barang: ";
cin >> jml;

for(i = 0; i < jml; i++)
{
    cin >> input[i];
}

cout << endl;

cout << "barang yang akan dicari: ";
getline(cin,nama);

for(i = 0; i < jml; i++)
{
    if(input[i] == nama)
    {
        cout << "nama ditemukan pada index ke-" << i;
        break;
    }
}

if(i == input)
{
    cout  << "Tidak Ada barang Dengan Nama Tersebut!";
}

cout << endl;

return 0;
}
