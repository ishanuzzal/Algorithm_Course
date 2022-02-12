
#include <bits/stdc++.h>

using namespace std;
int str[51];

long long int merge(int arr[],int mid,int low,int high){
     long long int count = 0;
     int i = low;
     int k = low;
     int j = mid+1;
     while(i<=mid && j<=high){
       if(arr[i]>arr[j]){
         str[k] = arr[j];
         count+=(mid+1-i);
         j++;
       }
       else{
         str[k] = arr[i];
         i++;
       }
       k++;
     }

     while(i<=mid){
       str[k] = arr[i];
       i++;
       k++;
     }

     while(j<=high){
       str[k] = arr[j];
       j++;
       k++;
     }

     for(int i=low; i<=high; i++){
       arr[i] = str[i];
     }

     return count;
}

long long int mergeSort(int arr[],int low,int high){
  long long int count = 0;
  if(low<high){
    int mid  = (low+high)/2;
    count += mergeSort(arr,low,mid);
    count += mergeSort(arr,mid+1,high);
    count+=merge(arr,mid,low,high);
  }

  return count;
}

void printArr(int arr[],int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main() {
 //freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

    long long int counts = mergeSort(arr,0,n-1);
   // printArr(arr,n);
    //cout<<counts<<endl;
    cout<<"Optimal train swapping takes "<<counts<<" swaps."<<endl;
  }
  
}