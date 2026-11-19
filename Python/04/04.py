row1 = "1234567890"
row2 = "qwertyuiop"
row3 = "asdfghjkl"
row4 = "zxcvbnm"

n = int(input())

for i in range(n):
    password = input()
    
    has_row1 = False
    has_row2 = False
    has_row3 = False
    has_row4 = False
    
    for char in password:
        if char in row1:
            has_row1 = True
        if char in row2:
            has_row2 = True
        if char in row3:
            has_row3 = True
        if char in row4:
            has_row4 = True
    
    if has_row1 and has_row2 and has_row3 and has_row4:
        print("strong")
    else:
        print("weak")
