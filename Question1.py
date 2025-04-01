'''
Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
"FizzBuzz".
'''

def print_outcome(number_):
    if num%5==0 and num%3==0:
        print('FizzBuzz')
    elif num%3==0:
        print('Fizz')
    elif num%5==0:
        print('Buzz')

for  num in  range(0,101,1):
    print_outcome(num)
    print(num)

