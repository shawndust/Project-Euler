def fibber(num_digits):
    fib = []
    fib.append(1)
    fib.append(2)
    
    it = True
    
    i = 3
    while it == True:
        fib.append(fib[-1] + fib[-2])
        i = i + 1
        if len(str(fib[-1]))>=num_digits:
            print(i)
            it = False

fibber(1000)
