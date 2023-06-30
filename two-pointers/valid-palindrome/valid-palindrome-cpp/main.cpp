#include <iostream>
#include "string"

using namespace std;

class Solution
{
public:
  bool isPalindrome(string s)
  {
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
      if (!isalnum(s[left]))
      {
        left++;
      }
      else if (!isalnum(s[right]))
      {
        right--;
      }
      else if (tolower(s[left]) != tolower(s[right]))
      {
        return false;
      }
      else
      {
        left++;
        right--;
      }
    }
    return true;
  }
};

int main()
{
  string str1 = "A man, a plan, a canal: Panama";
  bool r1 = (Solution().isPalindrome(str1));
  cout << r1 << endl;

  string str2 = "race a car";
  bool r2 = (Solution().isPalindrome(str2));
  cout << r2 << endl;

  string str3 = " ";
  bool r3 = (Solution().isPalindrome(str3));
  cout << r3 << endl;

  return 0;
}