'''
Write a program to generate the Fibonacci sequence up to 100.
'''

# fn = fn_1 + fn_2
fn_0=0
fn_1=1
fibo_seq=[fn_0,fn_1]

while True:
    next_num = fn_0+fn_1
    if next_num > 100:
        break
    fibo_seq.append(next_num)
    fn_0,fn_1 = fn_1,next_num
print(fibo_seq)