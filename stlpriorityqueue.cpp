#include<iostream>
#include<queue>
using namespace std;
int main(){

    //creation

    //---max heap---
    priority_queue<int> maxi;
    //---min heap---
    priority_queue<int,vector<int>,greater<int>> mini;

    //insertion

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size of max heap: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    cout<<"size of min heap: "<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    //operation
    cout<<"empty or not: "<<maxi.empty()<<endl;


    return 0;
}