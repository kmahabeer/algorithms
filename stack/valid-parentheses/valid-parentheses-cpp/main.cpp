#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
 public:
  std::unordered_map<char, char> key_value_pair = {
      {'(', ')'},
      {'[', ']'},
      {'{', '}'},
  };

  bool isValid(string s) {
    stack<char> stack;
    for (char c : s) {
      if (key_value_pair.count(c)) {
        stack.push(c);
      } else if (key_value_pair.count(stack.top()) &&
                 key_value_pair[stack.top()] == c) {
        stack.pop();
      } else {
        return false;
      }
    }
    return stack.empty();
  }
};

int main() {
  std::string str1{"()"};
  bool res1{Solution().isValid(str1)};
  cout << boolalpha << res1 << endl;

  std::string str2{"()[]{}"};
  bool res2{Solution().isValid(str2)};
  cout << boolalpha << res2 << endl;

  std::string str3{"(]"};
  bool res3{Solution().isValid(str3)};
  cout << boolalpha << res3 << endl;

  return 0;
}