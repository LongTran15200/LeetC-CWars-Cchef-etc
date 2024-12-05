def count_bits(n):
    return bin(n).count('1')

number = 1234
result = count_bits(number)
print(f"The number of 1 bits in the binary representation of {number} is {result}.")



#output
#The number of 1 bits in the binary representation of 1234 is 5. //1234 is 10011010010 in bits. In total, there are 5 1s.
