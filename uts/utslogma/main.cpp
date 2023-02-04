#include <iostream>

using namespace std;

int main()
{
    /*string nama;
    string alamat;
    int nim;

    cout<<"Masukan nama anda :";
    getline (cin, nama);
    cout<<"Alamat  : ";
    getline (cin, alamat);
    cout<<"NIM anda: ";
    cin>>nim;

    cout<<"Nama anda adalah "<<nama<<" Dengan nomor NIM "<<nim<<" Tinggal di "<<alamat<<endl;*/

    /*string nama,predikat;
    int nim,aik,java,logma,mtk,inggris,tambah;
    float jml_sks=13;
    float ipk;

    cout<<"nama mahasiswa : ";
    getline (cin, nama);
    cout<<"NIM anda: ";
    cin>>nim;

    cout<<"nilai mata kuliah AIK; ";
    cin>>aik;
    cout<<"nilai mata kuliah pemprograman java; ";
    cin>>java;
    cout<<"nilai mata kuliah Logma; ";
    cin>>logma;
    cout<<"nilai mata kuliah Matematika dasar; ";
    cin>>mtk;
    cout<<"nilai mata kuliah bahasa inggris; ";
    cin>>inggris;

    tambah=aik+java+logma+mtk+inggris;
    ipk=tambah/jml_sks;
    cout<<"==============================================\n";
    cout<<"Nama :"<<nama<<endl;
    cout<<"NIM : "<<nim<<endl;
    cout<<"jumlah nilai Mata Kuliah "<<tambah<<endl;
    cout<<"Total 13 SKS \n";
    cout<<"Nilai IPK : "<<ipk<<endl;

    if(ipk>=3.50 ){
        predikat="CUMLAUDE (A)";
    }else if(ipk<3.50){
        predikat="SANGAT MEMUASKAN (B)";
    }else if (ipk<3.00){
        predikat="CUKUP MEMUASKAN (C)";
    }else if (ipk<2.50){
        predikat="KURANG (D)";
    }else{
        ipk=false;
    }

    cout<<"Predikat :"<<predikat<<endl;
    cout<<"==============================================\n";*/

    /*int lembur,waktu_tambahan,gaji,gaji_utama,gaji_tambahan,total_gaji_tambahan;
    char masuk,jam_tambahan;
    gaji_utama=200000;
    gaji_tambahan=100000;
    cout<<"Hari apa masuk kerja : \nA senin\nB selasa\nC rabu\nD kamis\nE jumat\n";
    cout<<"hari apa : ";
    cin>>masuk;
    switch (masuk){
    case 'a':
        cout<<"Senin\n";
        cout<<"Apakah anda ada jam tambahan ";
        cin>>jam_tambahan;
        if((jam_tambahan=='y')||(jam_tambahan=='Y')){
            cout<<"berapa waktu jam kerja tambahan ";
            cin>>waktu_tambahan;
            total_gaji_tambahan=gaji_tambahan*waktu_tambahan;
        }else{
            jam_tambahan=false;
        }

    break;
    case 'b':
        cout<<"Selasa\n";
        cout<<"Apakah anda ada jam tambahan ";
        cin>>jam_tambahan;
        if((jam_tambahan=='y')||(jam_tambahan=='Y')){
            cout<<"berapa waktu jam kerja tambahan ";
            cin>>waktu_tambahan;
            total_gaji_tambahan=gaji_tambahan*waktu_tambahan;
        }else{
            jam_tambahan=false;
        }
        break;
    case 'c':
        cout<<"Rabu\n";
        cout<<"Apakah anda ada jam tambahan ";
        cin>>jam_tambahan;
        if((jam_tambahan=='y')||(jam_tambahan=='Y')){
            cout<<"berapa waktu jam kerja tambahan ";
            cin>>waktu_tambahan;
            total_gaji_tambahan=gaji_tambahan*waktu_tambahan;
        }else{
            jam_tambahan=false;
        }
        break;
    case 'd':
        cout<<"Kamis\n";
        cout<<"Apakah anda ada jam tambahan ";
        cin>>jam_tambahan;
        if((jam_tambahan=='y')||(jam_tambahan=='Y')){
            cout<<"berapa waktu jam kerja tambahan ";
            cin>>waktu_tambahan;
            total_gaji_tambahan=gaji_tambahan*waktu_tambahan;
        }else{
            jam_tambahan=false;
        }
        break;
    case 'e':
        cout<<"Jumat\n";
        cout<<"Apakah anda ada jam tambahan ";
        cin>>jam_tambahan;
        if((jam_tambahan=='y')||(jam_tambahan=='Y')){
            cout<<"berapa waktu jam kerja tambahan ";
            cin>>waktu_tambahan;
            total_gaji_tambahan=gaji_tambahan*waktu_tambahan;
        }else{
            jam_tambahan=false;
        }
        break;
    default:
        masuk=false;
        break;
    }
    gaji=gaji_utama+total_gaji_tambahan;

    cout<<"===========================================\n";
    cout<<"Gaji anda selama satu hari adalah : "<<gaji<<endl;
    cout<<"===========================================\n";*/

    return 0;
}
