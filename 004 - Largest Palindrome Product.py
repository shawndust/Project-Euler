def itIsAPalindrome(p):
    pq = str(p) 
    for i in range(0, len(pq)//2):
        if pq[i] != pq[-1 - i]:
            return False
    return True

def itIsNotAPrime(p):
    for i in range(2, p//2 + 1):
        if p%i == 0:
            return True
    return False

def largestPalindrome(n):
    numString = ""
    for i in range(0, n):
        numString += "9"
    numInt = int(numString)
    largestProduct = numInt*numInt 

    for i in range(largestProduct, 3, -1):
        if itIsAPalindrome(i):
            if itIsNotAPrime(i):
                return i
            
print(largestPalindrome(3))
