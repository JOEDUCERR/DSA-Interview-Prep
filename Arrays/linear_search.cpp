#include<iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    int to_search = 4;

    for(int i=0;i<size;i++) {
        if(array[i] == to_search) {
            cout<<array[i]<<" "<<"Element Found!"<<endl;
        }
        else {
            return -1;
        }
    }
}