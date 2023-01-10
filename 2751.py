import sys
N = int(sys.stdin.readline())
li = []
while N:
    x = int(sys.stdin.readline())
    li.append(x)
    N-=1

li = sorted(li)
for c in li:
    print(c)