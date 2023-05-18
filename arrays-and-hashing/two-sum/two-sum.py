class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
                

s1 = Solution()
print(s1.twoSum([2,7,11,15], 9)) # [0,1]

s2 = Solution()
print(s2.twoSum([3,2,4], 6)) # [1,2]

s3 = Solution()
print(s3.twoSum([3,3], 6)) # [0,1]