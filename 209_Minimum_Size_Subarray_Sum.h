#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int minSubArrayLen(int target, vector<int> &nums) {
    int minimumSize = INT_MAX;
    int start = 0;
    int end = 0;
    int runningTotal = 0;

    while (end < nums.size()) {
      runningTotal += nums.at(end++);
      while (runningTotal >= target) {
        minimumSize = std::min(minimumSize, end - start);
        runningTotal -= nums.at(start++);
      }
    }
    if (minimumSize == INT_MAX)
      return 0;
    return minimumSize;
  }
};
