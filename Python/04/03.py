s = input()

counts = {}
for letter in s:
    if letter in counts:
        counts[letter] += 1
    else:
        counts[letter] = 1

max_count = 0
let = ''
for letter in counts:
    if counts[letter] > max_count:
        max_count = counts[letter]
        let = letter

res = s.replace(let, '')
print(res)
