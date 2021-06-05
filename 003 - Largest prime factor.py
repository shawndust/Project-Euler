bigNum = 600851475143

def isPrime(u):
    for i in range(2, int(u/2)+1):
        if u%i == 0:
            return False
    return True

for i in range(int(bigNum/3) + 1, 3, -1):
    # print(i)
    if bigNum%i ==0:
        # print(i)
        if isPrime(bigNum/i):
            print(int(bigNum/i))
            break
print(bigNum)
