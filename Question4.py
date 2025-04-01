'''
Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.
'''
def capitalize_first_letters(input_string):
    words= input_string.title()
    print(input_string)
    print(words)
words='''
a program that accepts a string as input,
capitalizes the first letter of each word in the 
string, and then returns the result string
'''
capitalize_first_letters(words)
