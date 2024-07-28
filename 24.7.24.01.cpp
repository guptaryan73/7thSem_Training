#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            i++;
        }
        else
        {
            return a[i];
        }
    }
    return a[i];

    return 0;
}