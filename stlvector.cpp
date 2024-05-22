#include<iostream>
#include<vector>
using namespace std;
int main(){

    //creation
    vector<int> v;
    cout<<"capacity: "<<v.capacity()<<endl;

    vector<int> a(5,1);

    vector<int> b(a);
    cout<<"printing vector b: ";
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    //insertion
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;
    cout<<"size: "<<v.size()<<endl;

    //operations
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    cout<<"before pop: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"size after clear: "<<v.size()<<endl;

    cout<<v.empty()<<endl;

    return 0;
}