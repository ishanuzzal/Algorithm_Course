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
       int n,t=-1;
       stack<int> s;
       cin>>n;
       int arr[n];
       fr(0,n){
        cin>>arr[i];
       }

       fr(0,n){
        
        while(!s.empty()){
          if(s.top()<arr[i]){
             t=s.top();
              break;
          }
          else s.pop();

        }
        s.push(arr[i]);
        cout<<t<<" ";
        t=-1;
       }
       cout<<endl;
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
