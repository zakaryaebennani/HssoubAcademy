n = int(input())


def sqrt(n):
    
    if n==1 or n==0:
        return n

    l=1 ; r= n
    mid=0

    while(l<r):
        mid= (l+r)//2
        
        if(mid*mid == n):
            return mid
        
        elif mid*mid > n :
            r= mid-1
        
        else :
            l=mid+1

    return l if (l*l < n) else l-1


print(sqrt(n))