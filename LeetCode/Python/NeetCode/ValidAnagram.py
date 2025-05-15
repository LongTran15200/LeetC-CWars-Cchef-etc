# Time complex O(n)
# Space complex O(1) because we are not storing character but number of characters

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        stores = {}
        for i in s:
            if i in stores:
                stores[i] += 1
            else:
                stores[i] = 1
        
        for j in t:
            if j in stores:
                stores[j] -= 1
            else:
                return False
        return all(value == 0 for value in stores.values())
