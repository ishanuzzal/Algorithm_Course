//possible summation to get a digit

#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
 
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<string> vs;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef unordered_set<string> usr;

void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}

void permutation(int u, string p){
  if(u==0){
    cout<<p<<endl;
    return;
  }

  for(int i=1; i<=4 && i<=u; i++){
    permutation(u-i, p.append(to_string(i)));
    p.pop_back();
  }
}

int main(){
  
  init(); 
  permutation(4,"");
   return 0;  
}
