#include <iostream>
using namespace std;

int main()
{
    int a[4][4];
    int i,j,k,temp;
    cout<<"Enter the elements of the array: ";
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The array is: "<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                if(a[i][j]<a[i][k])
                {
                    temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    cout<<"The sorted array is: "<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
