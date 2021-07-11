def isPrime(n):
    for i in range (2, n//2 + 1):
        if n % i == 0:
            return False
    return True

def main(n):
    numToCheck = 2
    count = 0
    while count < n:
        if(isPrime(numToCheck)):
            count = count + 1
        numToCheck = numToCheck + 1
    return numToCheck - 1

print(main(10001))
