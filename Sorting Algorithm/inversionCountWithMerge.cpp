#include <bits/stdc++.h>

using namespace std;
const int M = 200000+1; 
long long int n;
long long int arr2[M];
long long int merge(long long int arr[], int left,int mid,int right){
    int i = left;
    int j = mid+1;
    int k = left;
    long long int count = 0;
    while(i<=mid && j<=right){
      if(arr[i]>arr[j]){
          arr2[k] = arr[j];
          j++;
          count+=(mid+1-i);
      }
      else { arr2[k] = arr[i];
        i++;
      }
      k++;
             
    }

      while(i<=mid){
         arr2[k] = arr[i];
        i++;
        k++;
      }
      while(j<=right){
        arr2[k] = arr[j];
        k++;
        j++;
        
      }
    

    for(int i= left; i<=right; i++){
      arr[i] = arr2[i];
    }
  return count;
}



long long int mergeSort(long long int a[],int l,int r){
  long long int count = 0;
  if(l<r){
    //cout<<"hi"<<endl;
    int mid = (l+r)/2;
    count += mergeSort(a,l,mid);
    count+=mergeSort(a,mid+1,r);
    count+=merge(a,l,mid,r);
  }
  return count;
}


int main() {
 //freopen("input.txt","r",stdin);
 long long int t;
 cin>>t;
 while(t--){
   cin>>n;
  long long int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  long long int counts = mergeSort(arr,0,n-1);
  //printArray(); 
  cout<<counts<<endl;
 }
  
}