#include <bits/stdc++.h>
using namespace std;
 


void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

 
int main()
{
   init();
   int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int sum = 1;
    int cnt;
    for(int i=2; i*i<=n; i++){
        cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
            sum *= (pow(i,cnt+1)-1)/(i-1);
    }

    if(n>1) {
        cnt = 1;
        sum *= (pow(n,cnt+1)-1)/(n-1);
    }

    cout<<"sum of divisors is "<<sum<<endl;

    }
    return 0;
}