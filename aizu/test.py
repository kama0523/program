a = []
while True:
    x = input()
    if x == "0":
        break
    a.append(x)

for i in range(len(a)):
    print(f"Case {i+1}: {a[i]}")

