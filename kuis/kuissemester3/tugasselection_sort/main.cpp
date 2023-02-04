#include <iostream>

using namespace std;

int main()
{
    int data[10];
    int temp, pos, jml_data;

    cout<<"Masukan jumlah data Siswa: ";
    cin>>jml_data;
    for(int i=0; i<jml_data; i++){
        cout<<"Masukan Nomor NISN siswa ke "<<i+1<<": ";
        cin>>data[i];
    }

    for(int a=0; a<jml_data; a++){
        temp = data[a];
        pos = a;
        for(int b= a; b<jml_data; b++){
            if(data[b] < temp ){
                temp = data[b];
                pos = b;
            }
        }
        data[pos] = data[a];
        data [a] = temp;

    }

    cout<< "Data setelah diurutkan :";
    for(int h=0; h<jml_data; h++){
        cout<<data[h]<<endl;
    }

    return 0;
}
