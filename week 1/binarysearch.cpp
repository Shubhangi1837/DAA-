#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter key";
    cin >> key;
    bool found = false;
    int mid = array[n / 2];
    if (key < mid)
    {
        for (int i = 0; i < mid; i++)
        {
            if (array[i] == key)
            {
                found = true;
            }
        }
    }
    if (array[mid] == key)
    {
        found = true;
    }
    if (key > mid)
    {
        for (int i = mid; i < n; i++)
        {
            if (array[i] == key)
            {
                found = true;
            }
        }
    }
    if (found == true)
    {
        cout << "present"
             << " " << key << endl;
    }
    else
    {
        cout << "not present"
             << " " << key << endl;
    }
}