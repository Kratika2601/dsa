#include<iostream>
#include<list>
using namespace std;
int main(){

    //creation
    list<int> l;

    list<int> n(5,100);
    cout<<"printing n: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> c(n);
    cout<<"printing c: ";
    for(int i:c){
        cout<<i<<" ";
    }
    cout<<endl;

    //insertion
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //operations
    l.erase(l.begin());
    cout<<"after erase: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size: "<<l.size()<<endl;

    return 0;
}