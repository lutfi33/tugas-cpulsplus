#include <iostream>

using namespace std;

int main()
{
    struct{
    int nim = 212520043;
    float uts = 100;
    float uas = 90;
    float tugas = 80;
    float nilai_akhir = 95 ;
    } nilai_mahasiswa;

    struct{
    int no_induk= 212520043;
    string nama = "lutfi hermansah";
    string kelas = "TI A";
    string alamat = "Kaliboto";
    string prodi = "Program Studi Teknologi Informasi";
    }data_mahasiswa;

    cout<<"NIM :"<<data_mahasiswa.no_induk<<endl;
    cout<<"Nama :"<<data_mahasiswa.nama<<endl;
    cout<<"Kelas :"<<data_mahasiswa.kelas<<endl;
    cout<<"Alamat :"<<data_mahasiswa.alamat<<endl;
    cout<<"Prodi :"<<data_mahasiswa.prodi<<endl;
    return 0;
}
