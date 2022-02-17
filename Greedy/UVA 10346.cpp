#include<bits/stdc++.h>
using namespace std;



int main()
{
    //freopen("input.txt","r",stdin);
    int n,k,div,rem,sum=0;
    
    while(cin>>n>>k){
        sum = n;
      while(n>=k){
        div= n/k;
        sum+=div;
        rem = n%k;
        n = div+rem;

     }

     cout<<sum<<endl;
    }
}