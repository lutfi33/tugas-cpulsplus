#include <iostream>

using namespace std;

int main()
{
    string data[100][100]={{"Sedan", "2020", "2000"}, {"MPV", "2020", "2300"},{"SUV", "2020", "1750"}};
    cout << "Jenis      Tahun       Penjualan" << endl;
    for(int y=0; y<3;y++){
        for(int x=0; x<3; x++){
            cout<<data[y][x];
            cout<<"         ";
        }
        cout<<endl;
    }
    return 0;
}
