/*
Given an array numns of size n, return the majority element
(element which appears more than n/2 times where n is size of array)
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int size = arr.size();
    int freq = 0;
    int ans = 0;

    
    for(int i=0;i<size;i++) {
        if(freq == 0) {
            ans = arr[i];
        }
        if(ans == arr[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    cout<<ans;
}