#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string nama,orang_tua;
    int nim;
    printf("Masukan Nama Anda :");
    scanf("%[^\n]s",&nama);
    printf("Masukan NIM:");
    scanf("%d",&nim);
    printf("Masukan Nama Orang Tua :");
    scanf(" %[^\n]s",&orang_tua);

    printf("Nama : %s\n", nama);
    printf("NIM : %d\n", nim);
    printf("ORTU : %s\n", orang_tua);

    /*int n;
    printf("Masukkan sembarang nilai : \n");
    scanf("%d",&n);
    if (n % 3 == 0)
        printf("Angka adalah kelipatan 3");
    else
        printf("Angka adalah bukan kelipatan 3");
    return 0;*/
}
