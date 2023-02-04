#include <iostream>

using namespace std;

int main()
{
    string mahasiswa[5]= {"Gilang","Wibowo","Dani","Putri","Daffa"};
    string pilih;
    char lagi;

    cout<<"Data Mahasiswa\n";
    cout<<"     1. "<<mahasiswa[0]<<endl;
    cout<<"     2. "<<mahasiswa[1]<<endl;
    cout<<"     3. "<<mahasiswa[2]<<endl;
    cout<<"     4. "<<mahasiswa[3]<<endl;
    cout<<"     5. "<<mahasiswa[4]<<endl;
    cout<<"\nNOTE : PERHATIKAN HURUF BESAR DAN KECIL\n\n";
    cout << "Mahasiswa yang akan dipanggil ? ";
    getline(cin,pilih);

    if(pilih==mahasiswa[0])
    {
        cout<<"Anda berhasil memanggil nama "<<mahasiswa[0]<<endl;
    }
    else if(pilih==mahasiswa[1])
    {
        cout<<"Anda berhasil memanggil nama "<<mahasiswa[1]<<endl;
    }
    else if(pilih==mahasiswa[2])
    {
        cout<<"Anda berhasil memanggil nama "<<mahasiswa[2]<<endl;
    }
    else if(pilih==mahasiswa[3])
    {
        cout<<"Anda berhasil memanggil nama "<<mahasiswa[3]<<endl;
    }
    else if(pilih==mahasiswa[4])
    {
        cout<<"Anda berhasil memanggil nama "<<mahasiswa[4]<<endl;
    }
    else
    {
        cout<<"Anda salah memanggil";
    }

    return 0;
}
