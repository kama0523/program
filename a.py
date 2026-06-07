N, A, B  = map(int,input().split())

answer = 0

for i in range(1,N+1):
    digit_sum = sum(map(int, str(i)))

    if A <= digit_sum <= B:
        answer += i
print(answer)

print(answer)