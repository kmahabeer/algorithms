class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        left, right = 0, 1
        maxProfit = 0

        while right < len(prices):
            if prices[left] < prices[right]:
                profit = prices[right] - prices[left]
                maxProfit = max(maxProfit, profit)
            else:
                left = right
            right += 1
        return maxProfit
        
s1 = Solution()
print(s1.maxProfit([7,1,5,3,6,4]))

s2 = Solution()
print(s2.maxProfit([7,6,4,3,1]))