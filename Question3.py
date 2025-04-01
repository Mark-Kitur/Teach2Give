'''
Write a program that takes an integer as input and returns true if the input is a power of two.
'''
import math
def checks_power_2(num):
    if math.log2(num).is_integer():
        print("True")
    else:
        print("False")

checks_power_2(128)


