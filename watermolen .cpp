#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if (input % 2 == 0 && input > 2 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// 1 - NO 2 - NO 3 - NO 4 - YES 5 - NO 6 - YES 4 2 7 - 4 3