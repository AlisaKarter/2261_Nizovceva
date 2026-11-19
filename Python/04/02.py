n = int(input())
days = list(map(int, input().split()))

k = []

for i in range(n):
    dress = days[i]
    if dress not in k:
        k.append(dress)
    
    if len(k) == 3:
        print(i + 1)
        break
else:
    print(n)
