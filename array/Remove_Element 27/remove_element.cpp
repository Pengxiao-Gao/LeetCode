#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  int removeElement(vector<int> &nums, int target) {
    int fast_index = 0;
    int slow_index = 0;
    for (fast_index = 0; fast_index < nums.size(); fast_index++) {
      if (nums[fast_index] != target) {
        nums[slow_index] = nums[fast_index];
        slow_index++;
      }
    }
    return slow_index;
  }
};

int main() {
  Solution solution;
  vector<int> v1 = {3, 2, 2, 3};

  int ans = solution.removeElement(v1, 3);
  std::cout << ans << std::endl;
  return 0;
}
