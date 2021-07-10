def sumOfSquares(n):
    sum = 0
    for x in range(1, n + 1):
        sum = sum + x**2
    return sum
    
def squareOfSum(n):
    sum = 0
    for x in range(1, n + 1):
        sum = sum + x
    return sum**2

def main(n):
    return squareOfSum(n) - sumOfSquares(n)

print(main(100))
