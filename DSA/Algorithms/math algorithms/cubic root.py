n = float(input())


def crt(n):
    
    if n==1 or n==0:
        return n
    elif ( n > 1):
        e=0.0000001
        answer=0
        l = 0; r=  n
        
        while (n - answer**3 > e):
            mid = (l+r)/2
            
            if (mid * mid * mid == n):
                return mid
            
            elif (mid **3 < n):
                l = mid
                answer = mid
            else :
                r = mid
                
        
        return answer
    
    else :
        e=0.0000001
        answer=1.5
        l = n; r=  1

        while ( answer**3 - n > e):
            mid = (l+r)/2

            if (mid **3 == n):
                return mid

            elif (mid **3 < n):
                l = mid

            else :
                r = mid
                answer = mid

        return answer

print( "%.7f"%crt(n) )