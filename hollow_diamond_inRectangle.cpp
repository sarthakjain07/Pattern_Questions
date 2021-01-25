#include<iostream>
using namespace std;

int main()
{
    int row,blocj,k,l;
    cin>>row;
    blocj=row+(row-1);
    k=row+1;
    l=row-1;
    for (int i = 1; i <=blocj; i++)
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
        for (int j = 1; j <=blocj; j++)
        {
            if(j<=k || j>=l)
                cout<<"*";
            else
                cout<<" ";    
        }
        cout<<endl;
    }
    
    return 0;
}