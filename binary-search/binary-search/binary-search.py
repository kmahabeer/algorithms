class Solution:
    def search(self, nums: list[int], target: int) -> int:
        leftIndex = 0
        rightIndex = len(nums) - 1

        while leftIndex <= rightIndex:
            middleIndex = round((leftIndex + rightIndex) / 2)

            if (
                target == nums[leftIndex]
                or target == nums[rightIndex]
                or target == nums[middleIndex]
            ):
                return nums.index(target)
            elif target < nums[middleIndex]:
                rightIndex = middleIndex - 1
            elif target > middleIndex + 1:
                leftIndex = middleIndex + 1
            leftIndex = leftIndex + 1
        return -1


s1 = Solution()
print(s1.search([-1, 0, 3, 5, 9, 12], 9))  # 4

s2 = Solution()
print(s2.search([-1, 0, 3, 5, 9, 12], 2))  # -1

s3 = Solution()
print(s3.search([5], 5))  # 0

s4 = Solution()
print(s4.search([1, 5], 5))  # 1

s5 = Solution()
print(s5.search([1, 3], 5))  # -1

s6 = Solution()
print(s6.search([-1, 0, 5], 5))  # 2
