#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int n, x;
   cin >> n;
   vector<int> nums;
   for (int i=0; i<n; i++) {
      cin >> x;
      nums.push_back(x);
   }
   sort(nums.begin(), nums.end());
   int distNums = 1;
   for (int i=1; i<n; i++) {
      if (nums[i] != nums[i-1]) distNums ++;
      else continue;
   }
   cout << distNums;
   return 0;
}