# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.
# Every close bracket has a corresponding open bracket of the same type.
 

# Example 1:

# Input: s = "()"

# Output: true

# Example 2:

# Input: s = "()[]{}"

# Output: true

# Example 3:

# Input: s = "(]"

# Output: false

# Example 4:

# Input: s = "([])"

# Output: true

#Time Complexity O(n)
#Space Complexity O(n)
class Solution(object):
    def isValid(self, s):
        dicts = {"{":"}",
                "(":")",
                "[":"]"}
        stack = []
        
        for i in range(len(s)):
            if s[i] in dicts:
                stack.append(s[i])
            elif stack and dicts[stack[-1]] == s[i]:
                stack.pop()
            else:
                return False
        return stack == []
