// Problem 6
// Sum Square Difference
// Get the problem with this link: https://projecteuler.net/problem=6
#include <iostream>
#include <cmath>
using namespace std;

// SSD stands for Sum Square Difference
int ssd(int x) {
    int sumOSq = 0;
    int squareOfSum = 0;
    int sum = 0;
    for (int i=1; i<=x; i++) {
        sumOSq += pow(i, 2);
    }
    for (int i=1; i<=x; i++) {
        sum += i;
    }
    squareOfSum = pow(sum, 2);
    sum = squareOfSum - sumOSq;
    return sum;
}
int main() {
    cout << ssd(10) << "\n";  // Solving the example test case: 2640
    cout << ssd(100); // Solving the problem: Required answer: 25164150
    return 0;
}
