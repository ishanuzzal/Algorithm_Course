
#include <bits/stdc++.h>

using namespace std;
const int m = (int) 2*10e5;
int str[m];

void merge(int arr[],int mid,int low,int high){
    
     int i = low;
     int k = low;
     int j = mid+1;
     while(i<=mid && j<=high){
       if(arr[i]>arr[j]){
         str[k] = arr[j];
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

}

void mergeSort(int arr[],int low,int high){
  
  if(low<high){
    int mid  = (low+high)/2;
     mergeSort(arr,low,mid);
     mergeSort(arr,mid+1,high);
    merge(arr,mid,low,high);
  }
}



int main() {
 //freopen("input.txt","r",stdin);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

     mergeSort(arr,0,n-1);
    int sum = 0;
    for(int i=0; i<n; i++){
      if(arr[i]>sum) sum+=1;
    }
  cout<<sum<<endl;
  
}