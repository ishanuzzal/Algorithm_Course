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

void possibleWays(int arr[3][3],int r, int c,string p){
  if(r==2 && c==2){
    cout<<p<<endl;
    return;
  }
  if(r>2 || c>2) return;
  if(arr[r][c]) return;
  arr[r][c] = 1;
  if(r>0) possibleWays(arr,r-1,c,p+"U");
  if(c>0) possibleWays(arr,r,c-1,p+"L");
  possibleWays(arr,r+1,c,p+"B");
  possibleWays(arr,r,c+1,p+"R");
  arr[r][c] = 0;
}


int main(){
  
  init(); 
  int arr[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
  
  possibleWays(arr,0,0,"");
 
  
  return 0;
}
