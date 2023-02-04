#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    char y;
    cout << "PAS INDONESIA KUAT" << endl;
    cout << "Apakkah Anda ingin bergabung bersama tim kami? (y/n)";
    cin>>y;
    if (y=='y'|| y=='Y'){
        cout<<"HALLO CALON TIM SUKSES PAS"<< endl;
        cout<<"================================================"<<endl;
        cout<<"ISIKAN DATA BERIKUT"<<endl;
        cout<<"Apakah Anda Bekerja? (y/n)";
        cin >>y;
        cout<<"Apakah Anda bisa Membaca Al-Quran? (y/n)";
        cin >>y;
        cout<<"\n Berapakan umur anda sekarang?";
        cin >>a;
        if (a<100){
            cout<<"SELAMAT BERGABUNG DI PAS INDONEISA KUAT";
        }else if (a==15){
            cout<<"Selamat anda Telah bergabung bersama kami";
        }else{
            cout<<"Selamat";
        }


    }else {
        cout<<"Program selesai";
    }

    return 0;
}
