import sys

def power(a, b, c):
    if b == 1:
        return a%c
    else:
        pow_result = power(a, b//2, c)
        pow_result = pow_result ** 2 % c
        if b%2 == 0:
            return pow_result
        return pow_result * a % c


a, b, c = map(int, sys.stdin.readline().rstrip().split())
print(power(a,b,c))