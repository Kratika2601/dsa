#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string> q;

    q.push("kratika");
    q.push("agarwal");
    q.push("gautam");

    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"first element before pop: "<<q.front()<<endl;

    q.pop();

    cout<<"size after pop: "<<q.size()<<endl;
    cout<<"first element after pop: "<<q.front()<<endl;

    return 0;
}