fib = []
fib.append(0)
fib.append(1)
fib.append(1)
i = 3
sum = 0

while True:
    fib.append(fib[i-1]+fib[i-2])
    if fib[i] < 4000000:
        if fib[i] % 2 == 0:
            sum = sum + fib[i]
    else:
        break
    i = i + 1
        
print(sum)
