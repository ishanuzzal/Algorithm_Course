#include<bits/stdc++.h>
using namespace std;


int getPivort(int arr[],int low, int high){
    int i = low;
    int j = high;
    int pivort = arr[low];

    while(i<j){
        while(arr[i]<=pivort && i<high) i++;
        while(arr[j]>pivort && j>=low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void quickSort(int arr[], int low,int high){
    if(high>low){
        int pivort = getPivort(arr,low,high);
        quickSort(arr,low,pivort-1);
        quickSort(arr,pivort+1,high);
        cout<<"Hi"<<endl;
    }
}

void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   // freopen("input.txt","r",stdin);
    int n;
    cin>>n;    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);
    printArr(arr,n);
}