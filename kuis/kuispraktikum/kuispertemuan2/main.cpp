#include <iostream>

using namespace std;

int main()
{
    int total;
    for(int y=1; y<=10; y++){
        int a;
        a=y%2;
        if(a){
            int jumlah=y*3;
            cout<<y<<" x 3 ="<<jumlah<<endl;
        }else{
            int jumlah2=y*2;
            cout<<y<<" x 2="<<jumlah2<<endl;
        }

    }


    return 0;
}
