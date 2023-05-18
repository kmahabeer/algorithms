class Solution:
    def isPalindrome(self, s: str) -> bool:
        newS = ""
        for ch in s:
            if ch.isalnum():
                newS = (newS + ch).lower()
            else:
                continue

        if len(newS) == 0 or len(newS) == 1:
            return True
        i = 0
        j = len(newS) - 1
        while i <= j:
            if (i == j or j == i+1) and newS[i] == newS[j]:
                return True
            elif newS[i] == newS[j]:
                pass
            else:
                return False
            i += 1
            j -= 1


s1 = Solution()
# "amanaplanacanalpanama" is a palindrome.
print(s1.isPalindrome("A man, a plan, a canal: Panama"))

s2 = Solution()
print(s2.isPalindrome("race a car"))  # "raceacar" is not a palindrome.

s3 = Solution()
print(s3.isPalindrome("aa"))
# s is an empty string "" after removing non-alphanumeric characters.
# Since an empty string reads the same forward and backward, it is a palindrome.
