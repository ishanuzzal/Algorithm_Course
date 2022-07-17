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

void insertionSort(vi &arr,int i,int n,int max){
  
  if(n==1) return;
  if(i<n){
    if(arr[i]<=arr[max]){

    return insertionSort(arr,i+1,n,max);
  }
  else return insertionSort(arr,i+1,n,i);
  }
  swap(arr[n-1],arr[max]);
  return insertionSort(arr,0,n-1,0);
}


int main(){
  
  init(); 
  vi arr = {4,3,2,1,5};
  insertionSort(arr,0,5,0);
  for(int i=0; i<5; i++) cout<<arr[i]<<" ";
  return 0;
}
