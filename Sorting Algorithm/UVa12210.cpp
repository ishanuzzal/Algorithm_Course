#include <bits/stdc++.h>

using namespace std;
const int M = (int)10e7; 
int arr2[M];
void merge(int arr[], int left,int mid,int right){
    int i = left;
    int j = mid+1;
    int k = left;
    while(i<=mid && j<=right){
      if(arr[i]>arr[j]){
          arr2[k] = arr[j];
          j++;
      }
      else { arr2[k] = arr[i];
        i++;
      }
      k++;
             
    }

    if(j>right){
      while(i<=mid){
         arr2[k] = arr[i];
        i++;
        k++;
      }
    }
    else{
      while(j<=right){
        arr2[k] = arr[j];
        k++;
        j++;
        
      }
    }

    for(int i= left; i<=right; i++){
      arr[i] = arr2[i];
    }

}

void mergeSort(int a[],int l,int r){
  if(l<r){
    int mid = (l+r)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
  }
}


int main() {
 //freopen("input.txt","r",stdin);
 
  int n,m,cases=0;
  while(cin>>n>>m){
    cases++;
    if(n==0 && m==0) break;

    int arr[n];
  int arr3[m];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int j=0; j<m; j++){
    cin>>arr3[j];
  }

  mergeSort(arr,0,n-1);
  if(n<=m) cout<<"Case "<<cases<<": "<<0<<endl;
  else cout<<"Case "<<cases<<": "<<n-m<<" "<<arr[0]<<endl;
  }
  
}