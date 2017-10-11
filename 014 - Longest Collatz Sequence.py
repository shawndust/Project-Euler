startNum = 13
x = startNum
x = 3
y = x
print(x)
coLen = 0;

while coLen < 1000000:
    x = y
    coLen = 0
    while (x > 2):
        if x % 2 == 0:
            x = x//2
            print(x)
            coLen += 1
        if x % 2 != 0:
            x = 3 * x + 1
            print(x)
            coLen += 1
    y += 1

print(1)    
print ("Longest Collatz length is %d" % coLen)
print ("Starting number is %d." % y)
