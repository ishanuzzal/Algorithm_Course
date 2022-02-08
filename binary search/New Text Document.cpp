#include <bits/stdc++.h>

using namespace std;

const int N=100001;
int n;
int arr[N];


bool able(int k){
    for(int i=1; i<=n; i++){
      if(arr[i]-arr[i-1]>k) return false;
      if(arr[i]-arr[i-1]==k) k = k-1;
    }

    return true;
}

int main() {
 //freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++){

     cin>>n;
    
    for(int j=1; j<=n; j++){
      cin>>arr[j];
    }

    arr[0] = 0;

     int low = 1;
    int high = 10000000;
    while(high-low>1){
      int mid = (low+high)/2;

      if(able(mid)){
        high = mid;
      }
      else low = mid+1;
    }
     if(able(low)) cout<<"Case "<<i<<": "<<low<<endl;
    else if(able(high)) cout<<"Case "<<i<<": "<<high<<endl;

  }
 
}