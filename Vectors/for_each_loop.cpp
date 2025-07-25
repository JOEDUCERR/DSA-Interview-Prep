#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vect(3, 0);

    for(int i : vect) {
        cout<< vect[i] << endl;
    }
}