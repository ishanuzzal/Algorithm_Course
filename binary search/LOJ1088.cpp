#include <bits/stdc++.h>

using namespace std;

int n,m,t;

int main() {
 //freopen("input.txt","r",stdin);
  cin>>t;
  for(int j=1; j<=t; j++){
    cin>>n>>m;
    int arr[n];
    for(int i=1; i<=n; i++){
      cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    cout<<"Case "<<j<<":"<<endl;

    while(m--){
      int lLimit,hLimit;
      cin>>lLimit>>hLimit;
      int low = 1;
      int high = n;

      while(high-low>1){
        int mid = (low+high)/2;
        if(arr[mid]<lLimit) low = mid+1;
        else high = mid;
      }
      
      if(arr[low]>=lLimit) lLimit = low;
      else if(arr[high]>=lLimit) lLimit = high;
      else lLimit = -1;

      if(lLimit<0) cout<<0<<endl;
      else{
      low = 1;
      high = n;
      while(high-low>1){
        int mid = (low+high)/2;
        if(arr[mid]<=hLimit) low = mid+1;
        else high = mid;
      }

      if(arr[low]>hLimit) hLimit = low;
      else if(arr[high]>hLimit) hLimit = high;
      else hLimit = n+1;
      
       cout<<hLimit-lLimit<<endl;}
    }
  }
  
  
}