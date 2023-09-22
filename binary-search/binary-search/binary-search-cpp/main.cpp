#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int search(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] < target) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    return -1;
  }
};

int main() {
  vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
  int result1{Solution().search(nums1, 9)};
  std::cout << result1 << std::endl;

  vector<int> nums2 = {-1, 0, 3, 5, 9, 12};
  int result2{Solution().search(nums2, 2)};
  std::cout << result2 << std::endl;

  return 0;
}