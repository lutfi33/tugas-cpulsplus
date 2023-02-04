#include <iostream>
using namespace std;


int main()
{
    int nilai_1,nilai_2,nilai_3,nilai_4,nilai_5,nilai_6,nilai_7,nilai_8,nilai_9,nilai_10,hasil;
    string score_1,score_2,score_3,score_4,score_5,score_6,score_7,score_8,score_9,score_10;
    string jurusan[15] = {"HUKUM","MANAJEMEN","PSIKOLOGI","BAHASA DAN SASTRA INDONESIA","BASAHA DAN SASTRA JAWA","BAHASA INGGRIS","EKONOMI","FISIKA","PGSD","MATEMATIKA","TEKNIK OTOMOTIF","AGRIBISNIS","PETERNAKAN","TEKNIK SIPIL","TEKNOLOGI INFOMASI"};
    char pilih,ulang,ulangi,a,b,c,d,y,lihat;
    string nama,asal_sekolah,alamat,dipilih,status;
    int nisn,tgl_pendaftaran,prodi_pilih;

    //AWAL
    cout<<"==============================================================================\n";
    cout<<"                        Selamat Datang Di Test CBT\n";
    cout<<"==============================================================================\n";

    //PERULANGAN KE 1
    do
    {
        cout <<"\n  Silahkan isi data diri untuk melanjutkan test CBT. \n";

        cout<<"     Nama Lengkap             : ";
        getline(cin, nama);
        cout<<"     Asal Sekolah             : ";
        getline(cin, asal_sekolah);
        cout<<"\n";
        cout<<"     Daftar Program Studi     : "<<endl;
        for(int a=0; a <15; a++)
        {
            cout<<"\t"<<a+1<<"."<<" Program Studi "<< jurusan[a]<<endl;
        }
        do
        {

            cout<<"     Masukkan kode program studi yang dipilih : ";
            cin>>prodi_pilih;
            switch(prodi_pilih)
            {
            case 1:
                dipilih=jurusan[0];
                break;
            case 2:
                dipilih=jurusan[1];
                break;
            case 3:
                dipilih=jurusan[2];
                break;
            case 4:
                dipilih=jurusan[3];
                break;
            case 5:
                dipilih=jurusan[4];
                break;
            case 6:
                dipilih=jurusan[5];
                break;
            case 7:
                dipilih=jurusan[6];
                break;
            case 8:
                dipilih=jurusan[7];
                break;
            case 9:
                dipilih=jurusan[8];
                break;
            case 10:
                dipilih=jurusan[9];
                break;
            case 11:
                dipilih=jurusan[10];
                break;
            case 12:
                dipilih=jurusan[11];
                break;
            case 13:
                dipilih=jurusan[12];
                break;
            case 14:
                dipilih=jurusan[13];
                break;
            case 15:
                dipilih=jurusan[14];
                break;
            default :
                cout<<"    *Anda salah memasukan kode program studi\n";
                break;
            }
        } while (prodi_pilih > 15);

        cin.ignore(1, '\n');
        cout<<"     Alamat                   : ";
        getline(cin, alamat);
        cout <<"     NISN                    : ";
        cin>>nisn;
        cout <<"     Tanggal Pendaftaran     : ";
        cin>>tgl_pendaftaran;
        cout <<"\n--------------------------------------------------------\n";
        cout<<"   Apakah data yang anda masukan sudah benar? (y/t)";
        cin>>pilih;
        cin.ignore(1, '\n');
    }
    while(pilih =='t');
    system("cls");

    cout<<"==============================================================================\n";
    cout<<"                             PANDUAN TEST\n";
    cout<<"==============================================================================\n";
    cout <<"Langkah-langkah mengerjakan soal Test CBT\n";
    cout <<"1. Ketik jawaban sesuai Abjad (A,B,C,D)\n";
    cout <<"2. Jika tidak menggunakan Abjad maka jawabanmu akan salah.\n\n";
    cout <<"\n===========================================================\n";

    //goto ke soal
soal:
    cout << "Apakah anda siap mulai tes CBT (y/t) : ";
    cin >> y;


    if(y=='y' || y=='Y')
    {
        system("cls");

        //SOAL NOMOR 1
        cout << "\n===========================================================\n";
        cout << "       1. Narapidana : penjara =\n\n";
        cout << "           A. Semut : Gula \n";
        cout << "           B. Harimau : Hutan\n";
        cout << "           C. Tentara : Perang\n";
        cout << "           D. Burung : Langit\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b =='B')
        {
            nilai_1 = 10;
            score_1 = "benar";
        }
        else
        {
            nilai_1 = 0;
            score_1 = "salah";
        }

        //SOAL NOMOR 2
        cout << "==============================================================================\n";
        cout << "       2. Salah satu 7 keajaiban dunia yang ada di Indonesia adalah?\n\n";
        cout << "           A. Tajmahal\n";
        cout << "           B. Borobudur\n";
        cout << "           C. Goa seplawan\n";
        cout << "           D. Piramida\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b=='B')
        {
            nilai_2 = 10;
            score_2 = "benar";
        }
        else
        {
            nilai_2 = 0;
            score_2 = "salah";
        }
        //SOAL NOMOR 3
        cout << "=======================================================================\n";
        cout << "       3. Tanggal kemerdekaan Indonesia adalah?\n\n";
        cout << "           A. 12\n";
        cout << "           B. 14\n";
        cout << "           C. 17\n";
        cout << "           D. 21\n";
        cout << "jawaban :";

        cin >> c;
        if (c == 'c'||c =='C')
        {
            nilai_3 = 10;
            score_3 = "benar";
        }
        else
        {
            nilai_3 = 0;
            score_3 = "salah";
        }
        //SOAL NO 4
        cout << "======================================================================\n";
        cout << "       4. Salah satu makanan khas dari daerah Purworejo adalah?\n\n";
        cout << "           A. Soto\n";
        cout << "           B. Geblek\n";
        cout << "           C. Lumpia\n";
        cout << "           D. Gudeg\n";
        cout << "jawaban :";

        cin >> b;
        if (b == 'b'||b=='B')
        {
            nilai_4 = 10;
            score_4 = "benar";
        }
        else
        {
            nilai_4 = 0;
            score_4 = "salah";
        }
        //SOAL NO 5
        cout << "=======================================================\n";
        cout << "       5. Bentuk pemerintahan indonesia adalah?\n\n";
        cout << "           A. Parlemen\n";
        cout << "           B. Serikat\n";
        cout << "           C. Monarki\n";
        cout << "           D. Republik\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_5 = 10;
            score_5 = "benar";
        }
        else
        {
            nilai_5 = 0;
            score_5 = "salah";
        }
        //SOAL NO 6
        cout << "========================================================\n";
        cout << "       6. Dasar negara Indonesia adalah?\n\n";
        cout << "           A. UUD 1945\n";
        cout << "           B. Perpres\n";
        cout << "           C. Perpu\n";
        cout << "           D. Pancasila\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_6 = 10;
            score_6 = "benar";
        }
        else
        {
            nilai_6 = 0;
            score_6 = "salah";
        }
        //SOAL NO 7
        cout << "=============================================================\n";
        cout << "       7. Presiden Indonesia setelah Soeharto adalah?\n\n";
        cout << "           A. B.J.Habibie\n";
        cout << "           B. I.r.Soekarno\n";
        cout << "           C. Megawati\n";
        cout << "           D. I.r.Joko Widodo\n";
        cout << "jawaban :";

        cin >> a;
        if (a == 'a'||a=='A')
        {
            nilai_7 = 10;
            score_7 = "benar";
        }
        else
        {
            nilai_7 = 0;
            score_7 = "salah";
        }
        //SOAL NO 8
        cout << "=======================================================\n";
        cout << "       8. Urutan bilangan cacah...\n\n";
        cout << "           A. 2,3,4,5....\n";
        cout << "           B. 1,2,3,4,...\n";
        cout << "           C. -1,0,1,2,...\n";
        cout << "           D. 0,1,2,3,4,...\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_8 = 10;
            score_8 = "benar";
        }
        else
        {
            nilai_8 = 0;
            score_8 = "salah";
        }
        //SOAL NO 9
        cout << "=======================================================\n";
        cout << "       9. Rumus menghitung luas persegi panjang?\n\n";
        cout << "           A. p x t\n";
        cout << "           B. p + l\n";
        cout << "           C. p x l\n";
        cout << "           D. p + t\n";
        cout << "jawaban :";

        cin >> c;
        if (c == 'c'||c=='C')
        {
            nilai_9 = 10;
            score_9 = "benar";
        }
        else
        {
            nilai_9 = 0;
            score_9 = "salah";
        }
        //SOAL NO 10
        cout << "=========================================================\n";
        cout << "       10. Lokasi Sikuit Mandalika ada di?\n\n";
        cout << "           A. Jakarta\n";
        cout << "           B. Sumatera\n";
        cout << "           C. Bali\n";
        cout << "           D. Nusa Tenggara Barat\n";
        cout << "jawaban :";

        cin >> d;
        if (d == 'd'||d=='D')
        {
            nilai_10 = 10;
            score_10 = "benar";
        }
        else
        {
            nilai_10 = 0;
            score_10 = "salah";
        }
        system("cls");

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

        //KETERANGAN
        cout<<"---------------------------------------------------------\n";
        cout<<"                         KETERANGAN                      \n";
        cout<<"---------------------------------------------------------\n";
        cout <<"========================================================\n";
        cout << "   Nama                    : "<< nama << endl;
        cout << "   Asal Sekolah            : "<< asal_sekolah << endl;
        cout << "   Program Studi           : "<< dipilih << endl;
        cout << "   Nilai kamu adalah       : "<< hasil << endl;
        cout << "   Status pendaftaran      : "<< status <<endl;
        cout <<"========================================================\n";

        if(hasil>=70)
        {

            cout <<"    Nomor Pendaftaran   : "<<"21-"<<nisn<<tgl_pendaftaran<<endl<<endl;
            cout <<" SILAHKAN ANDA MELAKUKAN DAFTAR ULANG\n";
            cout <<"========================================================\n";
        }
        else
        {
            cout<<" Nomor Pendaftaran   : maaf anda tidak bisa melakukan daftar ulang\n";
            cout <<"========================================================\n";
        }
        cout<<"LIhat hasil jawaban anda (y/t) :";
        cin>>lihat;
        if(lihat=='y' || lihat=='Y')
        {
            cout<< "------------------Jawaban Anda---------------------\n\n";
            cout<<"Soal No "<<"1. Jawaban anda " <<score_1<< " skor " <<nilai_1<<endl;
            cout<<"Soal No "<<"2. Jawaban anda " <<score_2<< " skor " <<nilai_2<<endl;
            cout<<"Soal No "<<"3. Jawaban anda " <<score_3<< " skor " <<nilai_3<<endl;
            cout<<"Soal No "<<"4. Jawaban anda " <<score_4<< " skor " <<nilai_4<<endl;
            cout<<"Soal No "<<"5. Jawaban anda " <<score_5<< " skor " <<nilai_5<<endl;
            cout<<"Soal No "<<"6. Jawaban anda " <<score_6<< " skor " <<nilai_6<<endl;
            cout<<"Soal No "<<"7. Jawaban anda " <<score_7<< " skor " <<nilai_7<<endl;
            cout<<"Soal No "<<"8. Jawaban anda " <<score_8<< " skor " <<nilai_8<<endl;
            cout<<"Soal No "<<"9. Jawaban anda " <<score_9<< " skor " <<nilai_9<<endl;
            cout<<"Soal No "<<"10. Jawaban anda " <<score_10<< " skor " <<nilai_10<<endl;
        }
        else
        {
            lihat=false;
        }

    }
    else if((y=='t')||(y=='T'))
    {
        cout << "Anda Belum Bersedia Mengikuti Tes CBT."<<endl;
    }
    else
    {
        cout<<"NOTE : ANDA SALAH MEMASUKAN HURUF!!! (Ketik 'U' untuk ulangi) :";
        cin>>ulangi;
        if(ulangi=='u'||ulangi=='U')
        {
            goto soal;
        }
        else
        {
            ulangi=false;
        }

    }

    return 0;
}
