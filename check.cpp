#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



bool checkIfExist(vector<int>& arr) {
    size_t len = arr.size();
    for (size_t i = 0; i < len; ++i) {
        for (size_t j = 0; j < len; ++j) {
            if (arr[i] * 2 == arr[j] && i != j)
                return true;
        }
    }
    return false;
}

int main() {

    vector<int> v = {-2,0,10,-19,4,6,-8};
    cout << checkIfExist(v) << endl;

    return 0;
}
