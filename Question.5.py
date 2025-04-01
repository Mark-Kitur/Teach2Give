'''
Write a program that takes an integer as input and returns an integer with reversed digit 
ordering. 
'''
import numpy as np
def reverse_int(n):
    arr = np.array([int(num) for num in str(n)])  
    arr = arr[::-1]  
    reversed_num = int("".join(map(str, arr))) 
    return reversed_num

num = 456373376
result = reverse_int(num)
print(result)