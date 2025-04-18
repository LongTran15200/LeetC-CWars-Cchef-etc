# Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

# Notice that the solution set must not contain duplicate triplets.

 

# Example 1:

# Input: nums = [-1,0,1,2,-1,-4]
# Output: [[-1,-1,2],[-1,0,1]]
# Explanation: 
# nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
# nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
# nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
# The distinct triplets are [-1,0,1] and [-1,-1,2].
# Notice that the order of the output and the order of the triplets does not matter.
# Example 2:

# Input: nums = [0,1,1]
# Output: []
# Explanation: The only possible triplet does not sum up to 0.
# Example 3:

# Input: nums = [0,0,0]
# Output: [[0,0,0]]
# Explanation: The only possible triplet sums up to 0.

#Time complexity O(n^3)
class Solution(object):
    def threeSum(self, nums):
        result = []
        nums.sort()  #sort in order to prevent any duplication 

        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue  # continue will help move iterate to next if duplicate number. similar to line 12 and 16

            for j in range(i + 1, len(nums)):
                if j > i + 1 and nums[j] == nums[j-1]:
                    continue

#Time complexity O(n^2)
class Solution(object):
    def threeSum(self, nums):
        result = []
        nums.sort()  #sort in order to prevent any duplication 
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            left = i+1
            right = len(nums) - 1

            #while left is still smaller than right ensure left and right wont be on the same index
            #since nums is being sorted then while loop will always triggered unless all variables are the same
            while left < right:
                total = nums[i] + nums[left] + nums[right]
                #keep since its being sorted left will always be smaller number 
                #if total is less than 0 then left will iterate 
                if total < 0:
                    left += 1
                #else if total is more than 0 right will move
                elif total > 0:
                    right -= 1
                else:
                    #if total = 0 then add the 3 nums into result
                    result.append([nums[i], nums[left], nums[right]])
                    #after found the result if the next ieration is similar to the previous then skip to the next iteration from left or right
                    while left < right and nums[left] == nums[left + 1]:
                        left += 1
                    while left < right and  nums[right] == nums[right - 1]:
                        right -= 1
                
                left += 1
                right -=1
        return result
