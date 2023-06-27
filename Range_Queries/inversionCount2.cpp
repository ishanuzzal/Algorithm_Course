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

const int N=1e5+10;

void init();
void update(int arr[],int i,int a,int n);
ll sum(int arr[],int l);
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       map<ll,int> m;
       int arr[n+1],bit[n+1];
       memset(bit,0,sizeof(bit));
       for(int i=1; i<=n; i++){
        cin>>arr[i];
        m[arr[i]];
       }

       ll cnt=0;
       for(auto &v:m){
        v.second= ++cnt;
        //cout<<v.first<<endl;
       }

       fr(1,n+1){
        arr[i]=m[arr[i]];
       }
       int inv_cnt=0;
       fr(1,n+1){
        inv_cnt+=sum(bit,n);
        inv_cnt-=sum(bit,arr[i]);
        update(bit,arr[i],1,n);
       }

      cout<<inv_cnt<<endl;
    }
    
    return 0;
}

void update(int arr[],int i,int a,int n){
  for(; i<=n; i+=i&(-i)){
    arr[i]+= a;
  }
}

ll sum(int arr[],int l){
  ll sum1=0, sum2=0;
  for(int i=l; i>0; i-=i&(-i)){
    sum1+=arr[i];
  }

  return sum1;
}

void init() {
  //int i, j, n, m;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
