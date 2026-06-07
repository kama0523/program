n,m = map(int,input().split())
x = list(map(int,input().split()))
y = list(map(int,input().split()))

x.sort()
y.sort()

answer=0
j=0

for i in range(n):
    if j < m and y[j] <= 2 * x[i]:
        answer += 1
        j += 1

print(answer)