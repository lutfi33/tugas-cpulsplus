#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat Datang Di Digital Kalkulator" << endl;

    //masukan inputan nilai pengguna
    cout << "\n Masukan nilai pertama : ";
    cin >> a;
    cout << "\n Masukan Nilai Aritmatika (+, -, /, *) :";
    cin >> aritmatika;
    cout << " \n Masukan nilai kedua : ";
    cin >> b;

    switch (aritmatika){
    case '+':
        hasil= (a + b);
        cout << "\n Hasil dari :" << a << aritmatika << b << " = " << hasil<< endl;
        break;
    case '-':
        hasil= (a - b);
        cout << "\n Hasil dari :" << a << aritmatika << b << " = " << hasil<< endl;
        break;
    case '/':
        hasil= (a / b);
        cout << "\n Hasil dari :" << a << aritmatika << b << " = " << hasil<< endl;
        break;
    case '*':
        hasil= (a * b);
        cout << "\n Hasil dari :" << a << aritmatika << b << " = " << hasil<< endl;
        break;
    default:
        cout << " NOTE: Anda salah mengisikan nilai aritmatika";
        break;
    }
    cout << "\n Program Selesai \n";


    return 0;
}
