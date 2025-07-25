#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 7, 11, 15};
    vector<int> final;
    int sum = 0;
    int target = 9;
    int start = 0;
    int end = arr.size() - 1;
    while(end > start) {
        sum = arr[start] + arr[end];
        if(sum > target) {
            end--;
        }
        else if(sum < target) {
            start++;
        }
        else if(sum == target) {
            final.push_back(start);
            final.push_back(end);
            for(int i=0;i<final.size();i++) {
                cout<<final[i]<<endl;
            }
            break;
        }
        else {
            cout<<"idk"<<endl;
        }
    }
}