#include <iostream>

using namespace std;

int main()
{
    int angka [4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    for(int a=0; a<4; a++){
        for(int b=0; b<5; b++){
          cout<<angka[a][b]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
