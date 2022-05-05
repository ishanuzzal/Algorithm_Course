#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M = 1e9+7;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
//<--if a>=10^18-->
/*ll binMul(ll a, ll b){
    int ans = 0;
    while(b){
        if(b&1){
            ans = (ans+a)%M;
        }
        b>>=1;
        a=(a+a)%M;
    }
}*/

long long int powItt(int a,int n,int m){
    int ans = 1;
    while(n){
        if(n&1){
            ans= (ans*1ll*a)%m;

        }
        a= (a*1ll*a)%m;
        n = n>>1;
    }

    return ans;

}
 
int main()
{
   init();
   ll int a,b,n,t;
   cin>>t;
   while(t--){
       cin>>a>>n;
       //<--n is 50^32 like this--> n cant directly store this huge number..so EULER theoream and ETF need to be used
        ll int ans = powItt(a,powItt(50,32,M-1),M);
        cout<<ans<<endl;
   }
   
    return 0;
}