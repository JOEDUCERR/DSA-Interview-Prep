#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 2, 1, 1, 1};

    int freq = 0;
    int check = arr.size()/2;
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr.size();j++) {
            if(i == j) {
                freq++;
            }
        }
        if(freq > check) {
            cout<<arr[i]<<endl;
            break;
        }
    }
}