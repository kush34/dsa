#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int noOfOps;
    cin >> noOfOps;
    int sum = 0;
    for(int i=0;i<noOfOps;i++){
        string op;
        cin>>op;
        if(op.find("+") != string::npos){
            sum++;
        }else{
            sum--;
        }
    }
    cout<< sum << endl;
}