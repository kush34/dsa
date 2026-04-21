#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    int oCount = 0;
    int eCount = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            eCount++;
        else
            oCount++;
    }
    for (int i = 0; i < num; i++)
    {
        if (oCount > eCount && arr[i] % 2 == 0)
        {
            cout << i+1 << endl;
            break;
        }
        if (eCount > oCount && arr[i] % 2 != 0)
        {
            cout << i+1 << endl;
            break;
        }
    }
}