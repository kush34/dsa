#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int noOfProblems;
    cin >> noOfProblems;
    int count = 0;
    for(int i=0;i<noOfProblems;i++){
        int agree = 0;
        for(int j=0;j<3;j++){
            int isYes;
            cin>>isYes;
            if(isYes) agree += 1;
        }
        if(agree >= 2) count++;
    }
    cout<< count << endl;
}