#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0;i<arr.size();i++) {
        currSum += arr[i];

        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    cout<<maxSum<<endl;
}