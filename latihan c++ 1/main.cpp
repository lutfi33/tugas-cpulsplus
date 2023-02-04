#include <iostream>

using namespace std;

int main()
{

    int angka = 1;
do{
 cout<<""<<angka<<"\n";
 angka++;
} while(angka <= 5);
    /*int awal,akhir;

    cout<<"MASUKAN NILAI AWAL ";
    cin>>awal;
    cout<<"\n MASUKAN NILAI AKHIR ";
    cin>>akhir;
    int nilai = awal;
    while(nilai<= akhir){
        cout<<nilai<<". Saya Senang"<<endl;
        nilai+=5;
    }*/

    /*int pil;
    cout<<"Pilih Salah satu \n1. Laki-Laki \n2. Perempuan "<< endl;
    cout<<"Jenis Kelamin Anda ";
    cin>>pil;
    if(pil==1){
        cout<<"Jenis Kelamin anda laki-laki";
    }else if(pil==2){
        cout<<"Jenis Kelamin anda Perempuan";
    }else{
        cout<<"Program Salah";
    }*/

    /*string jk;
    int pil,umur;
    cout<<"Pilih Salah satu \n1. Laki-Laki \n2. Perempuan "<< endl;
    cout<<"Jenis Kelamin Anda ";
    cin>>pil;
    cout<<"Berapakan Umur Anda ";
    cin>>umur;

    if(pil==1){
        jk = "Laki-Laki ";
    }else if(pil==2){
        jk= "Perempuan ";
    }else{
        jk="tidak ingin diberi tahu";

    }
    cout<<"============================================\n";
    cout<<"Jenis Kelamin Anda Adalah "<<jk<<"dan umur anda adalah "<<umur<<endl;*/


    /*string minum;
    char pilih;
    cout<<"Silahkan Pilih Minuman \n1. Kopi \n2. Es Teh \n3. Es Jeruk \n4. Nutrisari \n5. Air Mineral"<<endl;
    cout<<"Pesanan Anda ";
    cin>>pilih;

    switch (pilih){
    case 'kopi':
        minum = 'kopi';
        minum = "Kopi";
    break;
    case 'es teh':
        minum = "Es Teh";
    break;
    case 'es jeruk':
        minum = "Es Jeruk";
    break;
    case 'nutrisari':
        minum = "Nutrisari";
    break;
    case 'airmineral':
        minum = "Air Mineral";
    break;
        default:
        cout<<"Anda salah memilih";
    break;

        cout<<"Pesanan Anda Adalah "<<minum<<endl;
    }*/
    /*bool a = true;
    char b;
    int c;
    float d, e=1;

    while (a==true){
        cout<<"ulangi? ";
        cin>>b;
    switch(b){
    case 'y' || 'Y':
       //b=true;
        cout<<"Masukan jarak tempuh : ";
        cin>>d;
        //c = e+d;
        //c+=1;
        break;
    default:
        a=false;
        break;
        }
    }
    cout<<"total jarak "<<e<<" sebanyak "<<c<<endl;*/

    /*int a;

    cout<<"Masukan nilai";
    cin>>a;

    if (a>=5)
    {
        cout<<" lebih dari 5\n";
    }else
    {
        cout<<"kurang dari 5\n";
    }*/

    return 0;
}
