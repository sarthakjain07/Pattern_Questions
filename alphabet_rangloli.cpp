#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int row,blocki,k,l;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    blocki=row+(row-1);
    l=blocki-2;
    k=blocki+2;
    for (int i = 1; i <=blocki ; ++i)
    {
        if(i<=row)
        {
            k-=2;
            l+=2;
        }
        else
        {
            k+=2;
            l-=2;
        }
        for (int j = 1; j <=blocki+(blocki-1) ; ++j)
        {
            if(j>=k && j<=l && j%2!=0)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
    return 0;
}