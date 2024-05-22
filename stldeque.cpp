#include<iostream>
#include<deque>
using namespace std;
int main(){

    //creation
    deque<int> d;

    //insertion
    d.push_back(1);
    d.push_back(3);
    d.push_back(5);
    d.push_front(2);
    d.push_front(6);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //deletion
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //operations
    cout<<"Element at index 1 is "<<d.at(1)<<endl;

    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<"empty or not: "<<d.empty()<<endl;

    cout<<"before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}