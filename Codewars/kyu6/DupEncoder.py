from collections import Counter

def duplicate_encode(word):
    word_Lower = word.lower()
    
    char_Count = Counter(word_Lower)
    
    result = ""
    for char in word_Lower:
        if char_Count[char] > 1:
            result += ")"
        else:
            result += "("
            
    return result
