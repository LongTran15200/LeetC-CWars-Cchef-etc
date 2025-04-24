# Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

# You must not use any built-in exponent function or operator.

# For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

# Example 1:

# Input: x = 4
# Output: 2
# Explanation: The square root of 4 is 2, so we return 2.
# Example 2:

# Input: x = 8
# Output: 2
# Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

#Brute Force
class Solution(object):
    def mySqrt(self, x):
        n = 1 
        if x <= 1 and x >= 0:
            return x
        while n <= x:
            sum = (n * n)
            if sum > x:
                n -= 1
                return n
            else:
                n += 1
#Binary Search
class Solution(object):
    def mySqrt(self, x):
        min = 1
        max = x
        while min <= max:
            mid = (min + max) // 2
            res = mid * mid     
            if res == x:
                return mid
            elif res < x:
                min = mid + 1
            else:
                max = mid - 1
        return max


        
