#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int luckyNumber[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    // lucky Number: contains digit that contains only 4 and 7
    // check if number is lucky

    // Almost lucky number : evenly divied by some lucky Number

    // ex 47 is lucky number and can be divided by ?
    bool isFound = false;
    for (int i : luckyNumber)
    {
        if (num % i == 0)
        {
            isFound = true;
            break;
        }
    }   
    cout << (isFound ? "YES" : "NO") << endl;
}