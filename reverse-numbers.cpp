#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size, num;
    cin >> size;
    int end = size - 1;
    vector<int> nums;
    for (int i=1; i<=size; i++) {
        cin >> num;
        nums.push_back(num);
    }
    for (int j=end; j>=0; j--) {
        cout << nums[j] << " ";
    }
}

