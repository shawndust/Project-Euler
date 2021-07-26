def isTriplet(a, b, c):
    if a**2 + b**2 == c**2:
        return True
    else:
        return False

for x in range(1, 1000):
    for y in range(x+1, 1000):
        for z in range(y+1, 1000):
            if x + y + z == 1000:
                if isTriplet(x, y, z):
                    print(x*y*z)
