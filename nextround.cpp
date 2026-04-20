#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> score(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    int pScore = score[p-1];

    for (int i = 0; i < n; i++)
    {
        if (score[i] >= pScore && score[i] > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}