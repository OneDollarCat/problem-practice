#include <iostream>
#include <vector>
using namespace std;

int main() {
    int end;
    vector<int> nums;
    cin >> end;
    for (int i=1; i<end; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            nums.push_back(i);
        }
    }
    int sum = 0;
    for (int j : nums) {
        sum += j;
    }
    cout << sum;
}
