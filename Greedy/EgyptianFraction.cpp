#include<bits/stdc++.h>
using namespace std;

void frac(int nu, int de){
    if(nu==0 || de==0) return;
    
    if(de%nu==0){
        cout<<"1/"<<de/nu;
        return;
    }
    
    if(nu%de==0){
        cout<<nu/de<<endl;
        return;
    }

    if(nu>de){
        cout<<nu/de<<" ";
        frac(nu%de,de);
        return;
    }

    int n = de/nu+1;
    cout << "1/" << n << " + ";
    frac(n*nu-de, de*n);
    
}

int main()
{
    //freopen("input.txt","r",stdin);
    int nu,de;
    cin>>nu>>de;
    cout<<"Egyptian fraction Representation of "<<nu<<"/"<<de<<" is "frac(nu,de)<<endl;
}