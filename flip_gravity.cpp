#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(auto &i:arr){
        cout<<i<<" ";
    }
}