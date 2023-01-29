import sys
def findValue(x):
    cnt = 0
    if x == 1:
        return
    for i in range(2, int(x**0.5)+1):
        if x % i == 0:
            return False
    return True
 

n, m = map(int, sys.stdin.readline().split())
i = n
while i <= m:
    if findValue(i):
        print(i)
    i+=1

