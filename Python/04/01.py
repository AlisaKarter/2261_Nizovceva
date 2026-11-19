n = int(input())

count = 0
num = 2

while count < n:
    is_prime = True
    for i in range(2, num):
        if num % i == 0:
            is_prime = False
            break
    
    if is_prime:
        count += 1
        if count == n:
            print(num)
    
    num += 1
