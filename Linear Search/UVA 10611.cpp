#include <bits/stdc++.h>

using namespace std;


int main() {
 //freopen("input.txt","r",stdin);
  
    int n,a,l,index1;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

  cin>>l;
  for(int i=0; i<l; i++){
    cin>>a;
    index1 = -1;
  for(int i=0; i<n; i++){
      if(arr[i]<a){
        index1 = i;
      }
    }

    if(index1==-1) cout<<"X ";
    else cout<< arr[index1]<<" ";

    index1 = -1;

  for(int i=0; i<n; i++){
      if(arr[i]>a){
        index1 = i;
        break;
      }
    }

  if(index1==-1) cout<<"X"<<endl;
  else cout<<arr[index1]<<endl;

  }

}