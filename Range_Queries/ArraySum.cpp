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
void update(int arr[],int i,int a,int n);
ll sum(int arr[],int l,int r,int n);
int main(){
    init();
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int arr[n+1];
       memset(arr,0,sizeof(arr));
       for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        update(arr,i,a,n);
       }

       int q;
       cin>>q;
       while(q--){
        int l,r;
        cin>>l>>r;
        cout<<sum(arr,l,r,n)<<endl;
       }
    }

    return 0;
}

void update(int arr[],int i,int a,int n){
  for(; i<=n; i+=i&(-i)){
    arr[i]+= a;
  }
}

ll sum(int arr[],int l,int r,int n){
  ll sum1=0, sum2=0;
  for(int i=l-1; i>0; i-=i&(-i)){
    sum1+=arr[i];
  }

  for(int i=r; i>0; i-=i&(-i)){
    sum2+=arr[i];
  }

  return sum2-sum1;
}

void init() {
  //int i, j, n, m;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
