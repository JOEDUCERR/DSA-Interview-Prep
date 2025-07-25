#include<iostream>
using namespace std;

int main() {
    int array[] = {5,4,3,2,1};

    int start = 0;
    int size = sizeof(array) / sizeof(int);
    int end = size-1;

    while(start < end) {
        swap(array[start], array[end]);
        start++;
        end--;
    }

    cout<<"reversed array ->"<<endl;
    for(int i =0;i<size;i++) {
        cout<<array[i]<<" ";
    }
}