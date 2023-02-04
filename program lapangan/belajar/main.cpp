#include <iostream>

using namespace std;
int main()
{
    int lapangan,jam,waktu,mulai,hasil,akhir;
    int perjam_pagi=50000;
    int perjam_siang=80000;
    int perjam_malam=120000;
    cout<<"Pilih waktu bermain \n1. Pagi (jam 07,00-12,00 Harga 50.000 perjam) \n2. Siang (jam 13,00-18.00,00 Harga 80.000 perjam) \n3. Malam (jam 19,00-00,00 Harga 120.000 perjam)\n";
    cout<<"Pilih Pagi/Siang/Malam : ";
    cin>>waktu;

    switch(waktu)
    {
    case 1:
        cout<<"Mulai Bermain Pukul: ";
        cin>>mulai;
        cout << "Jam bermain : " ;
        cin>>jam;
        cout<<"Pilih Lapangan Futsal \n1. Lapangan 1 \n2. Lapangan 2\n";
        cout<<"(Lapangan 1/Lapangan 2 : ";
        cin>>lapangan;
        akhir=mulai+jam;
        hasil=perjam_pagi*jam;
        break;
    case 2:
        cout<<"Mulai Bermain Pukul: ";
        cin>>mulai;
        cout << "Jam bermain : " ;
        cin>>jam;
        cout<<"Pilih Lapangan Futsal \n1. Lapangan 1 \n2. Lapangan 2\n";
        cout<<"(Lapangan 1/Lapangan 2 : ";
        cin>>lapangan;
        akhir=mulai+jam;
        hasil=perjam_siang*jam;
        break;
    case 3:
        cout<<"Mulai Bermain Pukul: ";
        cin>>mulai;
        cout << "Jam bermain : " ;
        cin>>jam;
        cout<<"Pilih Lapangan Futsal \n1. Lapangan 1 \n2. Lapangan 2\n";
        cout<<"(Lapangan 1/Lapangan 2 ): ";
        cin>>lapangan;
        akhir=mulai+jam;
        hasil=perjam_malam*jam;
        break;
    default:
        cout<<"salah"<<endl;
        break;
    }
    cout<<"-----------------------------------------------------------\n";
    cout<<"Kamu Pesan Lapangan futsal "<<lapangan<<endl;
    cout<<"Waktu "<<jam<<" jam\n";
    cout<<"Mulai pukul "<<mulai<<" sampai pukul "<<akhir<<endl;
    cout<<"Harga : "<<hasil<<endl;
    cout<<"-----------------------------------------------------------\n";
    return 0;
}
