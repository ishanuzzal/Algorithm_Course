#include<bits/stdc++.h>
using namespace std;

struct items{
    char item;
    int weight;
    int profit;
};

void print(items arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i].item<<" "<<arr[i].weight<<" "<<arr[i].profit<<endl;
    }
}

bool cmp(items a, items b){
    double ratio1 = (double)a.profit/a.weight;
    double ratio2 = (double)b.profit/b.weight;

    return ratio1>ratio2;
}

double knapSack(items arr[], int size, int bag){
    sort(arr,arr+size,cmp);
    //print(arr,size);
    double profit = 0;
    for(int i=0; i<size; i++){
        if(bag==0) break;
        if(arr[i].weight<=bag){
            profit += (double) arr[i].profit;
            bag -= arr[i].weight;
        }
        else{
        
            profit+= (double)(arr[i].profit*bag)/arr[i].weight;
            bag = 0;
        }
    }

    return profit;
}


int main()
{
    //freopen("input.txt","r",stdin);
    items arr[3] = {
        {'1',4,15},{'2',15,20},{'3',18,35}
    };
    int bag = 20;
    cout<<"Max profit he can get is: "<<setprecision(4)<<knapSack(arr,3,bag)<<endl;
}