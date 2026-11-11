def gen_list(n):
    result = []
    result.append(n)
    
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        result.append(n)
        
    return result

print(*gen_list(7))
