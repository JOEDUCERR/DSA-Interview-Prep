#include<iostream>
#include<vector>
using namespace std;

int maxsubarraysum(vector<int> &arr, int size) {
    int res = arr[0];

    for(int i=0;i<size;i++) {
        int curr = 0;
        for(int j=i;j<size;j++) {
            curr = curr + arr[j];

            res = max(res, curr);
        }
    }
    return res;
}

int main() {
    vector<int> array = {2, 3, -8, 7, -1, 2, 3};
    int size = array.size();
    cout<<maxsubarraysum(array, size)<<endl;
    return 0;
}