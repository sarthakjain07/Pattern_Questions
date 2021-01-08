#include<iostream>
using namespace std;

int main()
{
    int row,block,k,l;
    cout<<"Enter row\n";
    cin>>row;
    k=row+1;
    l=row-1;
    block=row+(row-1);
    for(int i=1; i<=block;i++)
    {
        if(i<=row)
        {
            k--;
            l++;
        }
        else
        {
            k++;
            l--;
        }
        for(int j=1; j<=block;j++)
        {
            if(j>=k&&j<=l)
                cout<<"*";
            else
                cout<<"-";   
        }
        cout<<endl;
    }

    return 0;
}