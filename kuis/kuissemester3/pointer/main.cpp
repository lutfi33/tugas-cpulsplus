#include <iostream>

using namespace std;

int main()
{
    int x, y; //x dan y bertipe int
    int *px; //px pointer yang menunjuk objek
    x = 87;
    px = &x; //px berisi alamat dari x
    y = *px; //y berisi nilai yang dituju px
    cout<<" Alamat x = "<<&x<<endl;
    cout<<"Isi px = "<<px<<endl;
    cout<<"Isi x = "<<x<<endl;
    cout<<"nilai yang ditunjuk oleh px = "<<*px<<endl;
    cout<<"nilai y = "<<y<<endl;
    return 0;
}
