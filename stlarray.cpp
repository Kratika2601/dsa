#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {4, 3, 7};

    // creation
    array<int, 4> a = {1, 2, 3, 4};

    // traversing
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    
    // operations
    cout << "element at index 2: " << a.at(2) << endl;
    cout << "is array empty: " << a.empty() << endl;
    cout << "first element: " << a.front() << endl;
    cout << "last element: " << a.back() << endl;

    return 0;
}