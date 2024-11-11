#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int lPtr = 0;
    int hPtr = numbers.size() - 1;

    while (lPtr < hPtr) {

      int lVal = numbers.at(lPtr);
      int hVal = numbers.at(hPtr);

      if (lVal + hVal == target)
        return {lPtr + 1, hPtr + 1};
      if (lVal + hVal > target) {
        --hPtr;
        continue;
      }
      if (lVal + hVal < target) {
        ++lPtr;
        continue;
      }
    }
    return {lPtr + 1, hPtr + 1};
  }
};
