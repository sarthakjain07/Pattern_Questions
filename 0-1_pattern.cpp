#include<iostream>
using namespace std;

int main()
{
    int blocks,n=0;
    cout<<"Enter the number of blocks\n";
    cin>>blocks;
    for (int i = 1; i <=blocks; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            if((i+j)%2==0) // game of positions
            {
                cout<<"1";
            }    
            else
                cout<<"0";    
        }    
        cout<<endl;

    }
    
    return 0;

}         