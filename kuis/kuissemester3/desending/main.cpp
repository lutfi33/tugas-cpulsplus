#include <iostream>

using namespace std;

int main()
{
    int data[4]={4,7,5,1};
    int maximal=0;

    //menampikan isi array sebelum diurutkan
    cout<<"Sebelum melakukan Descending : ";
    for(int i=0; i<4; i++){
        cout<<data[i]<< " ";
    }

    //proses Descending
    for(int i=1; i<4; i++){
        for(int m=3; m>=i; m--){
            if( data[m]>data[m-1]){
                maximal=data[m];
                data[m]=data[m-1];
                data[m-1]=maximal;
            }
        }
    }

    //hasil Descending
    cout<<endl;
    cout<<"Setelah melakukan Descending : ";
    for(int i=0; i<4; i++){
    cout<<data[i]<<" ";
    }
    return 0;
}
