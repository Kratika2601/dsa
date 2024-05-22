#include<iostream>
#include<map>
using namespace std;
int main(){

    //creation
    map<int,string> m;

    //insertion
    m[1]="kratika";
    m[7]="parag";
    m[2]="nikhilesh";
    m[9]="vibhu";

    m.insert({5,"kajal"});

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;
    }

    //operation
    cout<<"is 7 present or not: "<<m.count(7)<<endl;

    m.erase(7);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;;
    }

    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}