#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  int search(vector<int> &nums, int target) {
    int left_index = 0;
    int right_index = nums.size() - 1;
    while (left_index <= right_index) {
      int mid_index = (right_index + left_index) / 2;
      if (nums[mid_index] > target) {
        right_index = mid_index - 1;
      } else if (nums[mid_index] < target) {
        left_index = mid_index + 1;
      } else {
        return mid_index;
      }
    }
    return -1;
  }
};

int main() {
  Solution solution;
  vector<int> v1 = {-1, 0, 3, 5, 9, 12};

  int ans = solution.search(v1, 9);
  std::cout << ans << std::endl;
  return 0;
}
