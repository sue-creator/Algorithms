a, b = map(int, input().split())

if a<b:
    a, b = b, a

def GCD(x, y):
    while(y):
        x, y = y, x%y
    return x
        
print(GCD(a, b))

def LCM(x, y):
    result = (x*y) // GCD(x, y)
    return result
    
print(LCM(a, b))