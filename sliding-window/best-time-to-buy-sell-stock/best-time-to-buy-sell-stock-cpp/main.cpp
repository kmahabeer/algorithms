#include <climits>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int> &prices) {
    int n = prices.size(), maxProfit = 0, buyPrice = INT_MAX;
    for (int i = 0; i < n; i++) {
      buyPrice = min(buyPrice, prices[i]);
      maxProfit = max(maxProfit, prices[i] - buyPrice);
    }
    return maxProfit;
  }
};

int main() {
  vector<int> nums1{7, 1, 5, 3, 6, 4};
  int res1{Solution().maxProfit(nums1)};
  cout << res1 << endl;

  vector<int> nums2{7, 6, 4, 3, 1};
  int res2{Solution().maxProfit(nums2)};
  cout << res2 << endl;

  return 0;
}