# Write a function to find the longest common prefix string amongst an array of strings.

# If there is no common prefix, return an empty string "".

 

# Example 1:

# Input: strs = ["flower","flow","flight"]
# Output: "fl"
# Example 2:

# Input: strs = ["dog","racecar","car"]
# Output: ""
# Explanation: There is no common prefix among the input strings.


class Solution(object):
    def longestCommonPrefix(self, strs):
        res = ""  # This will store the resulting longest common prefix

        strs.sort()  # Sorts the list of strings lexicographically (dictionary order)

        if not strs:
            return ""  # If the list is empty, return an empty string

        # After sorting, the first and last strings will be the most different
        # So comparing them is enough to find the common prefix among all strings
        for i in range(len(strs[0])):  # Loop through characters of the first string
            start = strs[0][i]  # Character at position i in the first string
            end = strs[len(strs) - 1][i]  # Character at position i in the last string

            if start != end:
                return res  # As soon as characters differ, return the current prefix

            res += strs[0][i]  # If they match, add the character to the result

        return res  # Return the final longest common prefix
