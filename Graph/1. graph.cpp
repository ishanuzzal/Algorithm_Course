#include <bits/stdc++.h>
using namespace std;

void addEdges(vector<int> arr[],int v,int u){
    arr[u].push_back(v);
    arr[v].push_back(u);
}

void print(vector<int> arr[]){
    for(int i=0; i<4; i++){
        cout<<"Adjacent list of  vertex "<<i<<endl;
        for(auto j:arr[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter the number of vertex"<<endl;
    int n;
    cin>>n;
    vector<int> arr[n];
    addEdges(arr,0,2);
    addEdges(arr,0,3);
    addEdges(arr,1,2);
    addEdges(arr,1,3);
    print(arr);
}