def divide(arr):
    
    mid=len(arr)//2
    return arr[:mid], arr[mid:]



def mergesort(arr):
    
    if len(arr) <= 1:    
        return arr
    
    left , right = divide(arr) 
    
    left=mergesort(left)    
    right=mergesort(right)  

    i=0; j=0
    merged=[]
    
    while(i < len(left) and j < len(right)) :
        
        if left[i]  < right[j]:
            merged.append(left[i])
            i+=1
            
        else:
            
            merged.append(right[j])
            j+=1
    
    while(j<len(right)):
            merged.append(right[j])
            j+=1
            
    while(i<len(left)):
            merged.append(left[i])
            i+=1
            
    return merged

arr = list(map(int, input().split()))
print(mergesort(arr))