// using recursion

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr, int n){
    // base case : cponsidering that 1 single element is sorted
    if(n == 1){
        return 1;
    }
    return (arr[n-1]<arr[n-2])?0:check(arr, n-1);
    // order of n time
}
int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(100);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);

    cout<<check(arr, arr.size());

    return 0;
}
