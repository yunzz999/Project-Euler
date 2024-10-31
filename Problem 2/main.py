def main():
    n=0
    n1=1
    n2=2
    sum=2
    i=0
    while(n<4000000):
        n=n1+n2
        temp=n2
        n2=n
        n1=temp
        if(i==2):
            i=i-2
            sum+=n
            print(n)
        else:
            i=i+1
    print(sum)
main()

## que horrible programa (pero funciono)