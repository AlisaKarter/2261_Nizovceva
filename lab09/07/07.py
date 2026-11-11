def every_other(seq):
    return [item for i, item in enumerate(seq) if i % 2 == 0]

print(*every_other([10, 20, 30, 40, 50]))
print(*every_other(range(10)))
print(*every_other(iter(range(10))))
