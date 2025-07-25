#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1};
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    //{1, 1, 1, 2, 2}

    int freq = 1;
    int ans = arr[0];

    for(int i=1;i<arr.size();i++) {
        if(arr[i] == arr[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = arr[i];
        }
        if(freq > n/2) {
            cout<<ans<<endl;
            break;
        }
    }
}