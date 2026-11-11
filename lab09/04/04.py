lst = ['hello', 'hell', 'bye', 'world', 'bybye']
lst.sort(key=lambda x: (len(x), x))
print(lst)
