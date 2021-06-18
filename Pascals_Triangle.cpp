#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==0){
        return 1;
    }
    while(n>0){
        fact=fact*n;
        n--;
    }
    return fact;
}

int bc(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
    
}

int main() {
int rocol;
cin>>rocol;
for(int i=0;i<rocol;i++){
    for(int j=0;j<rocol;j++)
    {
        if(j<=i)
            cout<<bc(i,j);

    }
    cout<<endl;
}
return 0;
}
