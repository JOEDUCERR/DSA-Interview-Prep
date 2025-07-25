#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1 ,2, 7, 11, 15};
    int target = 9;
    vector<int> final = {};
    int sum = 0;
    
    for(int i=0;i<arr.size();i++) {
        for(int j=i+1;j<arr.size();j++) {
            sum = arr[i]+arr[j];
            if(sum == target) {
                final.push_back(i);
                final.push_back(j);
                for(int k=0;k<final.size();k++) {
                    cout<<final[k]<<endl;
                }
            }
        }
    }
}