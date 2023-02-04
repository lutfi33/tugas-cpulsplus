#include <iostream>

using namespace std;

int main()
{
    int mat [4][3] = {{20,5,6},{9,8,5},{10,7,6},{90,8,50}};
    for (int a=0; a <= 3; a++)
    {
        for (int b=0; b <= 2; b++)
        {
            cout<<mat[a][b]<<" ";
        }
        cout<<"\n";
    }

    //==========================================================
    /*int a = 2;
    int b = 2;
    bool hasil1, hasil2, hasil3 ,hasil4, hasil5, hasil6;

    //sebanding
    hasil1= (a==b);

    //tidak sebanding
    hasil2= (a!=b);

    //lebih dari
    hasil3= (a > b);

    //kurang dari
    hasil4= ( a < b);

    //lebih dari sama dengan
    hasil5= (a >= b);

    //kurang dari sama dengan
    hasil6= ( a <= b);

    cout << hasil1 << endl;
    cout << hasil2 << endl;
    cout << hasil3 << endl;
    cout << hasil4 << endl;
    cout << hasil5 << endl;
    cout << hasil6 << endl;

    //==========================================================
    */


    /*//==========================================================
    //IF STATEMENT
    int a;

    cout << "Masukan Angka :";
    cin >> a;

    if ( a<3 ){
        cout << " Helo Word "<< endl;
    }
    cout << "selesai" << endl;*/

    //============================================================
    //IF ELSE
    /*int a;
     cout<< "masukan angka: ";
     cin >> a;
     if ( a<10){
        cout << " Berhasil"<< endl;
        //ELSE IF
     }else if(a==10) {
        cout << "Berhasil" << endl ;
     }else{
        cout << "Gagal \n";
     }

     cout << "program selesai" <<endl;*/

     //==========================================================

     //SWITCH CASE
     /*int a;

     cout << "Masukan Angka :";
     cin >> a;

     switch (a){
        case 1: cout << " a = 1 \n";
        break;
        case 2: cout << " a = 2 \n";
        break;
        case 3: cout << " a = 3 \n";
        break;
        case 4: cout << " a = 4 \n ";
        break;
        case 5: cout << " a = 5 \n";
        break;
        default: cout << "angka salah \n";
        break;
     }
     cout <<"Program selesai";*/

     //===========================================================

    //ASSIGMENT
    /*int a = 10;
    cout << "nilai awal adalah " << a << endl;

    //assigment operator
    a += 4;
    cout << "ditambah 4 menjadi "<< a << endl;

    a -= 8;
    cout << "dikurang 8 menjadi "<< a << endl;
    a *= 2;
    cout << "dikali 2 menjadi "<< a << endl;
    a %= 3;
    cout << "dimodulus 3 menjadi " << a << endl;*/

    //===============================================================
    //INCREMENT (+) DAN DECREMENT (-)
    /*int a = 8;
    int b = 8;
    //POSTICREMENT
    cout << a << endl;
    a++;
    cout << a << endl << endl;
    //PREINCREMENT
    cout << b << endl;
    ++b;
    cout << b << endl <<endl;*/

    //NOTE PERBEDAAN CARA KERJA POSTINCREMENT YAITU DIPRINT DULU KEMUDIAN DITAMBAHKAN SEDANGKAN PREINCREMENT YAITU DITAMBAHKAN DULU KEMUDIAN DI PRINT CONTOH...
    //POSTICREMENT
    /*cout << a << endl;
    cout << a++ << endl;
    cout << a << endl << endl;
    //PREINCREMENT
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;*/
    //======================================================================

    //WHILE LOOP
    /*int a =10;

    while ( a<=20){
        cout << "haloo";
        cout << a << endl;
        a += 1;
    }*/
    //====================================================================

    //DO WHILE

    /*int a = 1;

    do {
        cout << "hello ";
        cout << a << endl;
        a++;
    }while ( a<=10);*/
    //=======================================================================

    //FOR LOOP
    /*cout << "loop pertama" << endl;
    for ( int contoh =1; contoh<=10; contoh++){
        cout << contoh << endl;
    }*/

    /*string nama;
    char iya;
    char alamat[100],asal_sekolah[50],prodi[30];
    int tanggal,no_pendaftaran;
    do {
    cout <<"\n------------------------------------------------------------\n";
    cout <<"\n  Silahkan isi data diri untuk melanjutkan test CBT.\n";

    printf("   Nama Lengkap          : ");
    getline(cin,nama);
    printf("   Asal Sekolah          : ");
    gets(asal_sekolah);
    printf("   Program Studi Tujuan  : ");
    gets(prodi);
    printf("   Alamat                : ");
    gets(alamat);
    cout << "  Tanggal lahir         : ";
    cin>>tanggal;
    cout << "   No Pendaftaran       : ";
    cin>>no_pendaftaran;
    cout <<"\n------------------------------------------------------------\n";
    cout<<"Apakah data yang anda masukan sudah benar? (y/t)";
    cin>>iya;
    }while(iya=='t');*/

    /*string nama;
    char ulang;
    do
    {
        cout<<"Masukkan nama :";
        getline(cin,nama);
        cout<<"nama mu adalah :"<<nama<<endl;
        ulang++;

        cout<<"Lagi [Y/N]? ";
        cin>> ulang;
    }
    while(ulang=='y');
    cout<<"Keluar dari loop"<<endl;
    return 0;*/

}
