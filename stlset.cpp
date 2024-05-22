#include<iostream>
#include<set>
using namespace std;
int main(){

    //creation
    set<int> s;

    //insertion
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"5k present at: "<<*it<<endl;
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}