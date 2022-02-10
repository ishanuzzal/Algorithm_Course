#include <bits/stdc++.h>

using namespace std;


int main() {
 //freopen("input.txt","r",stdin);
  int n;
  cin>>n;
  int arr[n];
   cin>>arr[1];
  for(int i=2; i<=n; i++){
    cin>>arr[i];
    arr[i] = arr[i]+arr[i-1];
  }
  sort(arr+1,arr+n+1);

  cout<<endl;
  int b;
  cin>>b;
  while(b--){
    int val;
    cin>>val;
    int low = 1;
    int high = n;
    while(high-low>1){
      int mid = (high+low)/2;
      if(val>arr[mid]){
        low = mid+1;
      }
      else high = mid;
    }

    if(val<=arr[low]) cout<<low<<endl;
    else cout<<high<<endl;
  }
  
}
