#include <iostream>

using namespace std;

int main()
{
    string mhs[3][4]= {{"lutfi","001","budi","002"},{"melati","003","mawar","004"},{"farhan","005","kehan","006"}};
    string nama;
    char ulang;

    cout<<"Nama dan nim mahasiswa:"<<endl;
    for(int a=0; a<3; a++)
    {
        for(int b=0; b<4; b++)
        {
            cout<<mhs[a][b]<<" ";
        }
        cout<<endl;
    }

    do
    {
        cout<<"\n\n Masukan nama atau nim ";
        cin>>nama;
        if(nama == "lutfi" || nama == "001")
        {
            cout<<"Nama :"<<mhs[0][0]<<endl;
            cout<<"Nim  :"<<mhs[0][1]<<endl;

        }
        else if(nama == "budi" || nama == "002")
        {
            cout<<"Nama :"<<mhs[0][2]<<endl;
            cout<<"Nim  :"<<mhs[0][3]<<endl;
        }
        else if(nama == "melati" || nama == "003")
        {
            cout<<"Nama :"<<mhs[1][0]<<endl;
            cout<<"Nim  :"<<mhs[1][3]<<endl;
        }
        else if(nama == "mawar" || nama == "004")
        {
            cout<<"Nama :"<<mhs[1][2]<<endl;
            cout<<"Nim  :"<<mhs[1][3]<<endl;
        }
        else if(nama == "farhan" || nama == "005")
        {
            cout<<"Nama :"<<mhs[2][0]<<endl;
            cout<<"Nim  :"<<mhs[2][1]<<endl;
        }
        else if(nama == "kehan" || nama == "006")
        {
            cout<<"Nama :"<<mhs[2][2]<<endl;
            cout<<"Nim  :"<<mhs[2][3]<<endl;
        }
        else
        {
            true;
        }

        cout<<"Cari nama lagi? ";
        cin>>ulang;
        ulang++;
    }
    while(ulang =='y' || ulang =='Y');

    return 0;
}
