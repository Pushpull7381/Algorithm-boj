import sys
n = int(input())
li = list(map(int, sys.stdin.readline().split(' ')))
cnt = 0
for c in li:
    if c != 1:
        x = int(2)
        while c % x != 0:
            x+=1
        if(c == x and c > 1):
            cnt+=1
print(cnt)