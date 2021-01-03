#include<iostream>
using namespace std;

int main()
{
    int blocks;
    cout<<"Enter the number of blocks\n";
    cin>>blocks;
    for (int i = blocks; i >=1; i--)
    {
        for (int j = i; j>=1; j--)
            cout<<"*";
        cout<<endl;    
    }
    
    return 0;

}