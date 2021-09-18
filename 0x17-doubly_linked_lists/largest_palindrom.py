#!/usr/bin/python3
"""Script that print largest palindrme made from the product of two 3-digit"""
test_num = 0
num_list = []
palindrome = 0
for x in range(100, 1000):
    for y in range(100, 1000):
        num_list = list(str(x * y))
        length = len(num_list)
        if length == 4 or length == 5:
            if num_list[0] == num_list[ -1]:
                if num_list[1] == num_list[ -2]:
                    if palindrome < x * y:
                        palindrome = x * y
        else:
            if num_list[0] == num_list[ -1]:
                if num_list[1] == num_list[ -2]:
                    if num_list[2] == num_list[ -3]:
                        if palindrome < x * y:
                            palindrome = x * y
print(palindrome)
