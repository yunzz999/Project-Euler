def main():
    for i in range(1,100):
        print(sum(factorial(i)))

def factorial (n):
    if(n==0):
        return 1
    else:
        return n * factorial(n-1)

def sum (n):
    sum=0
    while(n>0):
        sum+=n%10
        n//=10
    return sum

main()

## sin optimizacion ni nada xddd