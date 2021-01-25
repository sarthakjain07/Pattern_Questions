#include<iostream>
using namespace std;

int main()
{
    int row,blocj,k,i;
    cin>>row;
    blocj=(row*2)-1;
    k=blocj+1;
    for (i = 1; i <=row; i++)
    {
        k--;
        for (int j = 1; j <=blocj; j++)
        {
            if(i==1 || i==row)
            {
                if(j>=(row+1)-i && j<=k)
                    cout<<"*";
                else
                    cout<<" "; 
            }
            if(i!=1 || i!=row)
            {
                if(j==(row+1)-i || j==k)
                    cout<<"*";
                else
                    cout<<" "; 
            }
               
        }
        cout<<endl;
    }
    
    return 0;
}