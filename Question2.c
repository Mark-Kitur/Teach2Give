//Write a program to generate the Fibonacci sequence up to 100.
# include <stdio.h>

int main(){
    int start,f_0=0;
    int f_1=1;
    int fibo_seq[14];
    fibo_seq[0]=0;
    fibo_seq[1]=1;
    int sum;
    for(start=2;start<14;start++){
        sum =f_0 + f_1;
        if (sum>=100){
            break;
        }
        fibo_seq[start]=sum;
        f_0=f_1;
        f_1=sum;
        printf("%d\n", fibo_seq[start]);
    }
    
}