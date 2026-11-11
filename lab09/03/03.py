lst = list(range(6000, 7000))
ans = max(lst, key=lambda x: bin(x).count('1'))
print(ans)
