# import sys

# def findValue(li, x, left, right):
#     mid = (left + right)//2

#     if (mid == left and mid == right) and li[mid] != x:
#         print(0)
#         return
        
#     elif li[mid] < x:
#         return findValue(li, x, mid+1, right)
#     elif li[mid] > x:
#         return findValue(li, x, left, mid-1)
#     elif li[mid] == x:
#         print(1)
#         return
    
 
# n = int(input())
# li = set(map(int, sys.stdin.readline().split()))
# li.sort()
# m = int(input())
# li2 = list(map(int, sys.stdin.readline().split()))

# for i in li2:
#     print(findValue(li, i, 0, len(li)-1))


import sys

n = int(input())
li = set(map(int, sys.stdin.readline().split()))
li.sort()
m = int(input())
li2 = list(map(int, sys.stdin.readline().split()))

for i in li2:
    if i in li:
        print(1)
    else:
        print(0)

