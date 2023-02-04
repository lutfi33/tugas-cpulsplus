#include <iostream>

using namespace std;

int main()
{
    int data[3][4];
    int dikali;

    for(int i=0; i<=2; i++)
    {
        for(int b=0; b<=3; b++)
        {
            cout<<"masukan baris ke "<<i+1<<" dan kolom ke "<<b+1<<": ";
            cin>>data[i][b];
        }
    }

    cout<<"\n\nMatrik sebelum perkalian :"<<endl;
    for(int h=0; h<=2; h++)
    {
        for(int j=0; j<=3; j++)
        {
            cout<<data[h][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"\n\nMatrik setelah perkalian:"<<endl;

    for(int p=0; p<=2; p++){
        for(int y=0; y<=3; y++){
            if(data[p][y]%2==0){
                cout<<data[p][y]*data[p][y]<<" ";
            }else{
                cout<<data[p][y]<<" ";
            }
        }
        cout<<endl;
    }


return 0;
}










