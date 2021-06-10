def GCF(x, y):
    a = x
    b = y
    R = 1 
    
    while R > 0:
        R = a % b
        a = b 
        b = R
    return a 
    
def LCM(list):
    mover = list[0]
    for i in range(1, len(list)+1):
        mover *= list[i-1]//GCF(mover, list[i-1])
    return mover

def solution(n):
    list = []
    for i in range(2, n+1):
        list.append(i)
    print(LCM(list))

solution(20)
