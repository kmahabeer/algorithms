class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ("".join(filter(str.isalnum, s))).lower()
        return s == s[::-1]


s1 = Solution()
# "amanaplanacanalpanama" is a palindrome.
print(s1.isPalindrome("A man, a plan, a canal: Panama"))

s2 = Solution()
print(s2.isPalindrome("race a car"))  # "raceacar" is not a palindrome.

s3 = Solution()
print(s3.isPalindrome("aa"))
# s is an empty string "" after removing non-alphanumeric characters.
# Since an empty string reads the same forward and backward, it is a palindrome.
