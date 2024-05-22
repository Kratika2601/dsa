#include<iostream>
#include<stack>
using namespace std;
int main(){

    //creation
    stack<string> s;

    //insertion
    s.push("Kratika");
    s.push("Agarwal");
    s.push("Gautam");

    //operations
    cout<<"Top Element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;

    cout<<"size: "<<s.size()<<endl;

    cout<<"enpty or not: "<<s.empty()<<endl;


    return 0;
}