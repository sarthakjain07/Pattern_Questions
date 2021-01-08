#include<iostream>
using namespace std;

int main()
{
    int blocks;
    cout<<"Enter the number of blocks\n";
    cin>>blocks;
    for (int i = 1; i <=blocks; i++)
    {
        for (int j = 1; j<=blocks; j++)
        {
            if(j<=i)
                cout<<i; // We are printing rows here
            else
                cout<<" ";    
        }    
        cout<<endl;    
    }
    
    return 0;

}