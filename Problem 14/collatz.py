cache = [0]*1000000

def col(n):
    if n ==1:
        return 1
    
    if n < 1000000 and cache[n]!=0:
        return cache[n]
    
    if n%2 ==0:
        return 1+col(n//2)
    else:
        return 1+col(3*n+1)
    
largest =0
start=0

for i in range(1,1000000):
    cache[i]=col(i)
    if cache[i]>largest:
        largest=cache[i]
        start=i
        
print(start)


# 837799 , resultado correcto