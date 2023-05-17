class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) == 1 and len(t) == 1 and s == t:
            return True
        letterSet1 = {}
        letterSet2 = {}

        for i in s:
            if i not in letterSet1.keys():
                letterSet1[i] = 1
            else:
                letterSet1[i] += 1

        for j in t:
            if j not in letterSet2.keys():
                letterSet2[j] = 1
            else:
                letterSet2[j] += 1

        return letterSet1 == letterSet2


s1 = Solution()
print(s1.isAnagram("anagram", "nagaram"))  # true

s2 = Solution()
print(s2.isAnagram("rat", "car"))  # false

s3 = Solution()
print(s3.isAnagram("t", "r"))  # false

s4 = Solution()
print(s4.isAnagram("t", "t"))  # true
