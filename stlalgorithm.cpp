#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);    
    v.push_back(3);    
    v.push_back(6);    
    v.push_back(7);   
 
    cout<<"is 6 present or not: "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound of 6: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound of 4: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"new a: "<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse string: "<<abcd<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"rotated vector: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"sorted vector: ";
    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}