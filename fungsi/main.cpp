#include <iostream>

using namespace std;

int kuadrat(int a){
    int b;
    b = a*a;
    return b;
}

int main()
{
    int masukan,hasil;
    cout << "masukan angka :";
    cin >> masukan;
    hasil = kuadrat(masukan);
    cout << hasil << endl;
    return 0;
}
