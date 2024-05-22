#include<iostream>
#include<climits>
using namespace std;

bool ispresent(int arr[][3], int target, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
void rowsum(int arr[][3], int n, int m){
    cout<<"printing sum row-wise"<<endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}
/*void colsum(int arr[][3], int n, int m){
    cout<<"printing sum row-wise"<<endl;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}*/
int largestrowsum(int arr[][3], int n, int m){
    int maxi = INT16_MIN;
    int rowindex = -1;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum+=arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowindex = i;
        }
    }
    cout<<"The largest row sum is: "<<maxi<<endl;
    return rowindex;
}
int main(){

    //creation
    int arr[3][3];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //taking input : row wise input
    cout<<"enter elements: ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    /*//taking input : column wise input
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }
    */

    //print/output
    cout<<"printing array: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    /*cout<<"enter the element to search: ";
    int target;
    cin>>target;
    if(ispresent(arr , target , 3 , 3)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }*/

    rowsum(arr, 3, 3);
    //colsum(arr, 3, 3);
    int ans = largestrowsum(arr, 3, 3);
    cout<<"row with largest sum : "<<ans<<endl;

    return 0;
}