def count_bits(n):
    return bin(n).count('1')

# Example usage
number = 1234
result = count_bits(number)
print(f"The number of 1 bits in the binary representation of {number} is {result}.")
