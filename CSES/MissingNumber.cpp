#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   long long n;
   cin >> n;
   long long el;
   vector<int> nums;
   for (long long i=0; i<n-1; i++) {
      cin >> el;
      nums.push_back(el);
   }
   long long missing;
   int expectSum = (n * (n + 1)) / 2;
   int realSum = 0;
   for (int i : nums) {
      realSum += i;
   }
   missing = expectSum - realSum;
   cout << missing;
   return 0;
}