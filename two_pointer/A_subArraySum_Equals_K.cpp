#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define fr(a, b)  		for(ll i = a; i < b; i++)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void init();

int main(){
    init();
    int t;
    cin>>t;
    while(t--){
       int n,a;
       cin>>n>>a;
       ll sum=0,l=0,r=0,f=0;
       int arr[n];
       fr(0,n){
        cin>>arr[i];
       }
       
       for(; l<n && r<n; ){
        sum+=arr[r];
        if(sum==a){
          f=1;
          break;
        }
        if(sum<a){
          r++;
        }
        else{
          sum-=arr[r];
          sum-=arr[l];
          l++;
        }
       }

       cout<<l<<" "<<r<<endl;
    }

    
    
    return 0;
}


void init() {
  //int i, j, n, m;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
