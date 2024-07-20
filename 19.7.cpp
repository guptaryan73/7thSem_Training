#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int totalElements;
    cin >> totalElements;
    vector<int> numbers(totalElements);
    for (int i = 0; i < totalElements; i++)
    {
        cin >> numbers[i];
    }
    
    for (int i = 0; i < totalElements; i++)
    {
        cout << numbers[i];
    }

    return 0;
}