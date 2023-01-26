n = int(input())

k = 1
cnt = 1
while n > k:
    k += cnt* 6
    cnt+=1
print(cnt)