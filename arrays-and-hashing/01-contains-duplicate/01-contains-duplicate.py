# Using hashset
# time complexity: O(n)
# space complexity: O(n)
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        hashSet = set()

        for n in nums:
            if n in hashSet:
                return True
            hashSet.add(n)
        return False


s1 = Solution()
print(s1.containsDuplicate([1, 2, 3, 1]))
