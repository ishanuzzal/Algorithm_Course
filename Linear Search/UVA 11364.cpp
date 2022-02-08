#include <bits/stdc++.h>

using namespace std;


int main() {
 //freopen("input.txt","r",stdin);

 int t,n;
 cin>>t;
 for(int i=1; i<=t; i++){
   cin>>n;
   int arr[n];
   int sum = 0;
   for(int i=0; i<n; i++){
     cin>>arr[i];
   }

   sort(arr,arr+n);

   for(int i=0; i<n-1; i++){
     sum+=arr[i+1]-arr[i];
   }

  cout<<sum*2<<endl;

 }

}
