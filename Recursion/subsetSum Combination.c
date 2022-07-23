#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e18+7;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

ll binMul(ll a, ll b){
    int ans = 0;
    while(b){
        if(b&1){
            ans = (ans+a)%M;
        }
        b>>=1;
        a=(a+a)%M;
    }
}

long long int powItt(ll a,ll n){
    ll ans = 1;
    while(n){
        if(n&1){
            ans= binMul(ans,a);

        }
        a= binMul(a,a);
        n = n>>1;
    }

    return ans;

}
 
int main()
{
   init();
   ll int a,n,t;
   cin>>t;
   while(t--){
       cin>>a>>n;
        ll int ans = powItt(a,n);
        cout<<ans<<endl;
   }
   
    return 0;
}