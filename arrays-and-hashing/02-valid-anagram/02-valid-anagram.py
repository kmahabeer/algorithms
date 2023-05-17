class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        for char in set(s):
            if s.count(char) != t.count(char):
                return False
        return True


s1 = Solution()
print(s1.isAnagram("anagram", "nagaram"))  # true

s2 = Solution()
print(s2.isAnagram("rat", "car"))  # false

s3 = Solution()
print(s3.isAnagram("t", "r"))  # false

s4 = Solution()
print(s4.isAnagram("t", "t"))  # true
