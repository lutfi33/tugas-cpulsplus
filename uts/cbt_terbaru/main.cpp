#include <iostream>
using namespace std;

int main()
{
    string status;
    char pilih,ulang,ulangi;
    string nama,asal_sekolah,alamat,prodi;
    char a,b,c,d,y;
    int nilai_1,nilai_2,nilai_3,nilai_4,nilai_5,nilai_6,nilai_7,nilai_8,nilai_9,nilai_10,hasil,tanggal,no_pendaftaran;

    //----------HEADER------------
    cout<<"==============================================================================\n";
    cout<<"                        Selamat Datang Di Test CBT\n";
    cout<<"==============================================================================\n";
    do
    {
        cout <<"\n------------------------------------------------------------\n";
        cout <<"\n  Silahkan isi data diri untuk melanjutkan test CBT. \n";

        cout<<"     Nama Lengkap             : ";
        getline(cin, nama);
        cout<<"     Asal Sekolah             : ";
        getline(cin, asal_sekolah);
        cout<<"     Program Studi Tujuan     : ";
        getline(cin, prodi);
        cout<<"     Alamat                   : ";
        getline(cin, alamat);
        cout <<"    Tanggal lahir           : ";
        cin>>tanggal;
        cout <<"    No Pendaftaran          : ";
        cin>>no_pendaftaran;
        cout <<"\n------------------------------------------------------------\n";
        cout<<"     Apakah data yang anda masukan sudah benar? (y/t)";
        cin>>pilih;
        cin.ignore(1, '\n');
    }
    while(pilih =='t');

    cout <<"Langkah-langkah mengerjakan soal Test CBT\n";
    cout <<"1. Ketik jawaban sesuai Abjad (A,B,C,D)\n";
    cout <<"2. Jika tidak menggunakan abjad maka jawabanmu akan salah.\n\n";
    cout <<"\n===========================================================\n";

    do{
    cout << "Apakah anda siap mulai tes CBT (y/n) : ";
    cin >> y;


    if(y=='y' || y=='Y')
    {


        //SOAL NOMOR 1
        cout << "==================\n";
        cout << "1. Narapidana : penjara =\n\n";
        cout << "  A. Semut : Gula \n";
        cout << "  B. Harimau : Hutan\n";
        cout << "  C. Tentara : Perang\n";
        cout << "  D. Burung : Langit\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b =='B')
        {
            nilai_1 = 10;
        }
        else
        {
            nilai_1 = 0;
        }




        //SOAL NOMOR 2
        cout << "==================\n";
        cout << "2. salah satu 7 keajaiban dunia yang ada di Indonesia adalah?\n\n";
        cout << " A. Tajmahal\n";
        cout << " B. Borobudur\n";
        cout << " C. Goa seplawan\n";
        cout << " D. Piramida\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b=='B')
        {
            nilai_2 = 10;
        }
        else
        {
            nilai_2 = 0;
        }
        //SOAL NOMOR 3
        cout << "==================\n";
        cout << "3. tanggal kemerdekaan Indonesia adalah?\n\n";
        cout << " A. 12\n";
        cout << " B. 14\n";
        cout << " C. 17\n";
        cout << " D. 21\n";
        cout << "jawaban :";

        cin >> c;
        if (c == 'c'||c =='C')
        {
            nilai_3 = 10;
        }
        else
        {
            nilai_3 = 0;
        }
        //SOAL NO 4
        cout << "==================\n";
        cout << "4. Salah satu makanan khas dari daerah Purworejo adalah?\n\n";
        cout << " A. Soto\n";
        cout << " B. Geblek\n";
        cout << " C. Lumpia\n";
        cout << " D. Gudeg\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b=='B')
        {
            nilai_4 = 10;
        }
        else
        {
            nilai_4 = 0;
        }
        //SOAL NO 5
        cout << "==================\n";
        cout << "5. Bentuk pemerintahan indonesia adalah?\n\n";
        cout << " A. Parlemen\n";
        cout << " B. Serikat\n";
        cout << " C. Monarki\n";
        cout << " D. Republik\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_5 = 10;
        }
        else
        {
            nilai_5 = 0;
        }
        //SOAL NO 6
        cout << "==================\n";
        cout << "6. Dasar negara Indonesia adalah?\n\n";
        cout << " A. UUD 1945\n";
        cout << " B. Perpres\n";
        cout << " C. Perpu\n";
        cout << " D. Pancasila\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_6 = 10;
        }
        else
        {
            nilai_6 = 0;
        }
        //SOAL NO 7
        cout << "==================\n";
        cout << "7. Presiden Indonesia setelah Soeharto adalah?\n\n";
        cout << " A. B.J.Habibie\n";
        cout << " B. I.r.Soekarno\n";
        cout << " C. Megawati\n";
        cout << " D  I.r.Joko Widodo\n";
        cout << "jawaban :";

        cin >> a;
        if (a == 'a'||a=='A')
        {
            nilai_7 = 10;
        }
        else
        {
            nilai_7 = 0;
        }
        //SOAL NO 8
        cout << "==================\n";
        cout << "8. Urutan bilangan cacah...\n\n";
        cout << " A. 2,3,4,5....\n";
        cout << " B. 1,2,3,4,...\n";
        cout << " C. -1,0,1,2,...\n";
        cout << " D. 0,1,2,3,4,...\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_8 = 10;
        }
        else
        {
            nilai_8 = 0;
        }
        //SOAL NO 9
        cout << "==================\n";
        cout << "9. Rumus menghitung luas persegi panjang?\n\n";
        cout << " A. p x t\n";
        cout << " B. p + l\n";
        cout << " C. p x l\n";
        cout << " D. p + t\n";
        cout << "jawaban :";

        cin >> c;
        if (c == 'c'||c=='C')
        {
            nilai_9 = 10;
        }
        else
        {
            nilai_9 = 0;
        }
        //SOAL NO 10
        cout << "==================\n";
        cout << "10. Lokasi Sikuit Mandalika ada di?\n\n";
        cout << " A. Jakarta\n";
        cout << " B. Sumatera\n";
        cout << " C. Bali\n";
        cout << " D. Nusa Tenggara Barat\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_10 = 10;
        }
        else
        {
            nilai_10 = 0;
        }
        //RUMUS PENILAIAN
        hasil = nilai_1+nilai_2+nilai_3+nilai_4+nilai_5+nilai_6+nilai_7+nilai_8+nilai_9+nilai_10;

        if (hasil>=70)
        {
            status="Lulus";
        }
        else
        {
            status="Tidak Lulus";
        }
        cout <<"=======================================================\n";
        cout << "   Nama                    : "<< nama << endl;
        cout << "   Asal Sekolah            : "<< asal_sekolah << endl;
        cout << "   Program Studi           : "<< prodi << endl;
        cout << "   Nilai kamu adalah       : "<< hasil << endl;
        cout << "   Status pendaftaran      : "<< status <<endl;
        cout <<"=======================================================\n";

        if(hasil>=70)
        {

            cout <<"    Nomor Induk Mahasiswa   : "<<"20210"<<tanggal<<no_pendaftaran<<endl;
            cout <<"=======================================================\n";
        }
        else
        {
            cout<<" Nomor Induk Mahasiswa   : maaf anda tidak bisa mendapatkan NIM\n";
            cout <<"=======================================================\n";
        }

    }
    else if((y=='n')||(y=='N'))
    {
        cout << "Anda Belum Bersedia Mengikuti Tes CBT."<<endl;
    }
    else
    {
        cout<<"NOTE : ANDA SALAH MEMASUKAN HURUF!!! (Ketik 'U' untuk ulangi) :";
        cin>>ulangi;

    }
    }while(ulangi=='U' || ulangi=='u');
    return 0;
}
