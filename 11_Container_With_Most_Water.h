#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
public:
  int maxArea(std::vector<int> &height) {
    auto sPtr = 0;
    auto ePtr = height.size() - 1;
    auto currentArea = 0;

    while (sPtr < ePtr) {
      auto area = (ePtr - sPtr) * std::min(height.at(ePtr), height.at(sPtr));
      if (currentArea < area) {
        currentArea = area;
      }
      height[sPtr] < height[ePtr] ? ++sPtr : --ePtr;
    }
    return currentArea;
  }
};
