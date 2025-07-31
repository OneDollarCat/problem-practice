#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, num;
    cin >> size;
    vector<int> nums;
    for (int i=0; i<size; i++) {
        cin >> num;
        nums.push_back(num);
    }
    int last = size - 1;
    for (int j=last; j>=0; j--) {
        cout << nums.at(j) << " ";
    }
    return 0;
}