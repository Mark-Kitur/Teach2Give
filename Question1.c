/*Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
"FizzBuzz". */
#include <stdio.h>

int main(){
    int a =0;
    for (a; a<101;a++){
        printf("%d\n",a);
        if (a%5 ==0 & a%3==0){
        printf("FizzBuzz\n");
        }
        else if (a%3 ==0)
        {
            printf("Fizz\n");
        }
        else if (a%5 ==0){
            printf("Buzz\n");
        }
        
    }
}