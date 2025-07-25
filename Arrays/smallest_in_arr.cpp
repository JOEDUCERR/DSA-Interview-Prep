#include<iostream>
#include<climits>
using namespace std;

int main() {
    int array[] = {1, 2, 4, 5, 3};
    int smallest = INT_MAX;

    for(int i=0;i<smallest;i++) {
        if(array[i] < smallest) {
            smallest = array[i];
        }
    }
    cout<<smallest<<endl;
}