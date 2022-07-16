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
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
 
void init() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif 
}
 
/*upperLeft Triangle
*
* *
* * *
* * * *
---------
*/ 
/*void upperLeft(int r,int c,int n){
  if(r==n) return;
  if(r==c){
    cout<<endl;
    return upperLeft(r+1,0,n);
  }
  cout<<"*"<<" ";
   return upperLeft(r,c+1,n);
}*/

void bubbleSort(vi &v, int i, int n){
  if(n==1) return;
  if(i<n-1){
    if(v[i]>v[i+1]){
      swap(v[i],v[i+1]);
    }
     return bubbleSort(v,i+1,n);
  }
  return bubbleSort(v,0,n-1);
  
}

int main(){
  
  init(); 
  vi v = {5,2,3,2,1};
  bubbleSort(v,0,5);
  for(int i=0;i<5;i++) cout<<v[i]<<" ";
  return 0;
}
