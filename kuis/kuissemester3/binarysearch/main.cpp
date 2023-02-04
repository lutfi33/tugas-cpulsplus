#include <iostream>

using namespace std;

int main()
{
    int temp, cari;
    int data[7] = {3, 8, 2, 5, 4, 9, 7};

    /* Pengurutan Bubble Sort (Ascending) */
    for(int i = 0; i<7; i++) {
       for(int j = i+1; j<7; j++)
       {
          if(data[j] < data[i]) {
             temp = data[i];
             data[i] = data[j];
             data[j] = temp;
          }
       }
    }

    cout<<"Masukkan Data yang Dicari : ";
    cin>>cari;

    cout<<"\nData Setelah Diurutkan : "<<endl;
    for(int i=0; i < 7; i++){
        cout<<data[i]<<"   ";
    }

    /* Pencarian Biner (Binary Search) */
    int pertama = 0;
    int terakhir = 7;
    int tengah = 0;
    while(pertama < terakhir){
        tengah = (pertama+terakhir)/2;
        if(data[tengah] < cari){
            pertama = tengah-1;
        }else if(data[tengah] == cari){
            cout<<"\n\nAngka "<<cari<<" ditemukan pada indeks ke-"<<tengah<<endl;
            break;
        } else {
            terakhir = tengah+1;
        }
    }
    if(pertama>terakhir){
        cout<<"\n\nAngka "<<cari<<" Tidak Ditemukan!"<<endl;
    }
    cout<<endl;
    return 0;
}
