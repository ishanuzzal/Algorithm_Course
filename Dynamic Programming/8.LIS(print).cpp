#include<bits/stdc++.h>

using namespace std;

int main(){
   //freopen("input.txt","r",stdin);
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   
   int lcs[n];
    for(int i=0; i<n; i++){
        lcs[i] = 1;
    }

   for(int i=1; i<n; i++){
       for(int j=0; j<n; j++){
           if(arr[j]<arr[i] && lcs[j]+1>lcs[i]){
               lcs[i] = lcs[j]+1;
           }
       }
   }

   int length = lcs[0];
   for(int i=0; i<n; i++){
       if(length<lcs[i]) length=lcs[i];
   }

   int max = length;
    //cout<<length<<endl;
   vector<int> v;
   for(int i=n-1; i>=0; i--){
       if(max==lcs[i]){ v.push_back(i);
        max--;
       }
   }

   for(int i=0; i<v.size(); i++){
       cout<<arr[v[i]]<<endl;
   }
}