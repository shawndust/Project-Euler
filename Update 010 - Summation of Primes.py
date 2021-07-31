def sumOfPrimesBelowN(n):
    prime = [True for i in range(n+1)]
    p =2
    while(p*p < n + 1):
        if prime[p] == True:
            for i in range(p*2, n+1, p):
                prime[i] = False
        p = p + 1
    prime[0] = False
    prime[1] = False
    sum = 0
    for i in range(len(prime)):
        if prime[i]:
            sum = sum + i 
    return sum    
print(sumOfPrimesBelowN(2000000))
