#include <iostream>
#include "vector"

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
        {
          return {i, j};
        }
      }
    }
    return {};
  }
};

int main()
{
  vector<int> nums1{2, 7, 11, 15};
  vector<int> res1{Solution().twoSum(nums1, 9)};
  cout << "[" << res1[0] << ", " << res1[1] << "]" << endl;

  vector<int> nums2{3, 2, 4};
  vector<int> res2{Solution().twoSum(nums2, 6)};
  cout << "[" << res2[0] << ", " << res2[1] << "]" << endl;

  vector<int> nums3{3, 3};
  vector<int> res3{Solution().twoSum(nums3, 6)};
  cout << "[" << res3[0] << ", " << res3[1] << "]" << endl;

  return 0;
}