a, p = map(int, input().split())
arr = []
while a not in arr:
    arr.append(a)
    a = sum([int(i)**p for i in str(a)])
print(arr.index(a))
