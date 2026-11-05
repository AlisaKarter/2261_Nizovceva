def t(i):
    return i >= 1000

left = -1
right = 10**18

while right - left > 1:
    mid = (left + right) // 2

    if t(mid):
        right = mid
    else:
        left = mid

print(right)
