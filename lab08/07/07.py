x = [int(t) for t in input().split()]
for num in x:
    if num < 0:
        print(f"Найдено отрицательное число: {num}")
        break
else:
    print("Все числа неотрицательные")
