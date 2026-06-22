
total = 0
n = int(input())

a = list(map(int, input().split()))

min = a[0]
max = a[0]

for i in range (len(a)):
    if a[i]<=min:
        min = a[i]
    if a[i]>=max:
        max = a[i]
    total += a[i]

print(min, max, total) 
