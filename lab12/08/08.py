class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __str__(self):
        return '(' + str(self.x) + ', ' + str(self.y) + ')'   

class Rectangle:
    def __init__(self, a, b):
        self.topleft = a
        self.bottonright = b
    def __str__(self):
        return '|' + str(self.topleft) + '-' + str(self.bottonright) + '|'
        
        
a = Point(10,5)
print(a)
r = Rectangle(Point(0, 10), Point(10, 0))
print(r)
