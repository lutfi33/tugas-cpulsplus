#include <iostream>

using namespace std;

struct {
    string nama;
    int berat;
}Barang[10];

struct{
    int awal, akhir;
}nilai;

bool penuh(){
    if(nilai.akhir == 10 - 1){
        return true;
    } else {
        return false;
    }
}

bool kosong(){
    if(nilai.akhir == -1){
        return true;
    }else {
        return false;
    }
}

void kurang();
void menu();
void tambah();
void tampil();
void exit();


void menu(){
    int pilih;
    cout<<"DAFTAR PENGINPUTAN DATA BERAS"<<endl;
    cout << "1. masukkan data\n";
    cout << "2. Hapus satu data\n";
    cout << "3. Tampilkan data\n";
    cout << "4. Exit\n";
    cout << "Masukkan pilihan anda:";
    cin >> pilih;
    cout << endl;
    if(pilih == 1){
        tambah();
    }else if(pilih == 2){
        kurang();
    } else if(pilih == 3){
        tampil();
    }else if(pilih == 4){
        exit();
    }else {
        menu();
    }
}

void exit(){
    exit(0);
    menu();
}

void tambah(){
    if(!penuh()){
        string nama;
        int berat;
        cout << "Masukkan nama beras:";
        cin >> nama;
        cout << "Masukkan berat beras:";
        cin >> berat;
        Barang[nilai.akhir].nama = nama;
        Barang[nilai.akhir].berat = berat;
        ++nilai.akhir;
        cout << endl;
        menu();
    }else {
        cout << "Data penuh";
        menu();
    }
}

void kurang(){
    if(!kosong()){
        for(int i = nilai.awal; i < nilai.akhir; i++){
            Barang[i].nama = Barang[i+1].nama;
            Barang[i].berat = Barang[i+1].berat;
        }nilai.akhir--;
        cout << "Data berhasil dihapus" << endl;
        cout << endl;
        menu();
    }else{
        cout << "antrian kosong" << endl;
    }
}



void tampil(){
    if(!kosong()){
        for(int i = 0; i < nilai.akhir; i++){
        cout<<"------------------------------------"<<endl;
        cout << "Nama berasa: " << Barang[i].nama << endl;
        cout << "berat beras : " << Barang[i].berat << endl;
        cout<<"------------------------------------"<<endl;
        cout << endl;
        }
    }else {
        cout << "data kosong";
        cout << endl << endl;
    }
    menu();
}



int main(){
    menu();

    return 0;
}
