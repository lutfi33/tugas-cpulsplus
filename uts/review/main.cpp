#include <iostream>



using namespace std;



int main()

{

    string nama;

    string alamat;

    int nim;



    cout<<"Masukan nama anda :";

	getline (cin, nama);

	cout<<"Alamat  : ";

	getline (cin, alamat);

	cout<<"NIM anda: ";

	cin>>nim;



    cout<<"Nama anda adalah "<<nama<<" Dengan nomor NIM "<<nim<<" Tinggal di "<<alamat<<endl;

    return 0;

}

