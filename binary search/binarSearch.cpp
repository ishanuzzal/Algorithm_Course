#include<bits/stdc++.h>

using namespace std;

long long int bs(long long int arr[],int n,int val){
    int low = 0;
    int high = n-1;
    while(high-low>1){
        int mid = (high+low)/2;
        if(arr[mid]<=val){
            low = mid;
        }
        else high = mid-1;
    }

}

int main() {
   // freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int val = 11;
  int index =   bs(arr,n,val);
  cout<<index<<endl;

}