#include <iostream>

using namespace std;

int main()
{
    string data[100][100];
    int jumlah;

    cout<<"Masukan Jumlah Data : ";
    cin>>jumlah;

    for(int i=0; i<jumlah; i++)
    {
        cout<<"Masukan Nama : ";
        cin>>data[i][0];
    }
    for(int i=0; i<jumlah; i++)
    {

        cout<<"Masukan Nim : ";
        cin>>data[i][1];
    }

    cout<<"DATA SEBELUM DIURUTKAN : "<<endl;
    cout<<"NAMA | NIM"<<endl;
    for(int i=0; i<jumlah; i++)
    {
        cout<<data[i][0]<<" | "<<data[i][1]<<endl;
    }

    cout<<"DATA SETELAH DIURUTKAN"<<endl;
    for(int i=0; i<jumlah; i++){
        for(int k<jumlah-1; k>=0; k-- ){
            if(data[k]<data[k-1]){
                temp = data[k];
                data[k]=data[k-1];
                data[k-1]= temp;
            }
        }

    }
    for(i=0; i<=jumlah; i++){
        cout<<data[i]<< " ";
    }
    cout<<endl;


    return 0;
}
