# Языки программирования
## Лабораторная работа 12

**Первые шесть заданий требуется выполнить на языке С++.**
### Задание 1 **(2)**

*Запишите класс* **box** *с тремя скрытыми полями типа с плавающей
точкой:* **length**, **widht**, **height**. *Добавьте в класс инициализирующий
конструктор. Найдите размер одного объекта этого класса с
использованием* **sizeof**.

```c++
#include <iostream>
using namespace std;

class box{
private:
    double length;
    double widht;
    double height;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
        }
};

int main(){
    box a(10, 6, 3);
    std::cout << sizeof(a) << std::endl;
}
```

<img width="94" height="70" alt="image" src="https://github.com/user-attachments/assets/6b0d0d4a-8547-4092-85c7-2de5eea40a83" />

Размер объектов равен сумме его полей. В данном случае 3 поля типа double(8 бит) поэтому программа выводит 24.

### Задание 2 **(2)**

*Добавьте в класс методы для вычисления объема коробки и
площади поверхности всех граней. Напишите программу, тестирующую
работу методов. Проверьте, изменился ли размер одного объекта этого
класса. Объясните результат*

```c++
#include <iostream>
using namespace std;

class box{
private:
    double length;
    double widht;
    double height;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
        }
    double V();
    double S();
};

double box::V(){
    return length * widht * height;
}

double box::S(){
    return (2 * ((length * widht) + (widht * height) + (length * height)));
}

int main(){
    box a(10, 6, 3);
    std::cout << sizeof(a) << std::endl;
    std::cout << "volume = " << a.V() << std::endl;
    std::cout << "surface = " << a.S() << std::endl;
}
```

<img width="152" height="81" alt="image" src="https://github.com/user-attachments/assets/2b98b65b-d7c4-4719-8af2-a903c01b9bf7" />

Методы классов не хранятся в самом классе поэтому размер объекта этого класса не изменился.

### Задание 3 **(2)**

*Создайте два объекта* **x** *и* **y** *класса* **box** *в куче. Напишите
программу, для проверки работы методов, которая будет использовать
оба объекта. Не забывайте, что объекты созданные в куче следует
освобождать.*

```c++
#include <iostream>
#include "box.cpp"
using namespace std;

int main(){

    box *x = new box(10, 6, 3);
    box *y = new box(8, 8, 8);

    if (y->V() > x->V()){
        std::cout << "Volume y greater than volume x" << std::endl;
    }else{
        std::cout << "Volume x greater than volume y" << std::endl;
    }

    if ((y->S() + x->S()) >= 400){
        std::cout << "Surface y+x >= 400" << std::endl;
    }else{
        std::cout << "Surface y+x < 400" << std::endl;
    }

    delete x;
    delete y;
    return 0;
}
```

<img width="291" height="56" alt="image" src="https://github.com/user-attachments/assets/508b16da-418e-4591-aefb-915c51efdf69" />

### Задание 4 **(2)**

*Добавьте в класс одно статическое поле и метод для вывода
адресов всех четырех полей. Создайте три объекта этого класса в
куче, в статической памяти и на стеке. Выведите адреса полей.
Объясните результат.*

**box.cpp**

```c++
#include <iostream>
using namespace std;

class box{
private:
    double length;
    double widht;
    double height;
    static int count;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
            count++;
        }
    double V();
    double S();
    void addr();
};

double box::V(){
    return length * widht * height;
}

double box::S(){
    return (2 * ((length * widht) + (widht * height) + (length * height)));
}

void box::addr(){
    std::cout << &length << ' ' << &widht << ' ' << &height << ' ' << &count << std::endl;
}

int box::count = 0;
```

**04.cpp**

```c++
#include <iostream>
#include "box.cpp"
using namespace std;

box c(12, 10, 1);

int main(){

    box a(10, 8, 3);
    box *b = new box(8, 8, 8);

    a.addr();
    b->addr();
    c.addr();

    return 0;
}
```

<img width="566" height="87" alt="image" src="https://github.com/user-attachments/assets/d9a40440-a71b-4bd6-a1ae-390e14785f45" />

Статическое поле одно на все объекты независимо от того где они расположены. Поэтому адрес count и адреса полей из объекта `c` имеют похожие адреса, а остальные поля в других областях расположены далеко друг от друга.

### Задание 5 **(2)**

*Напишите программу, которая продемонстрирует разницу между
присваиванием* ```x=y``` *и* ```*x=*y```.


### Задание 6 **(3)**

*Запишите класс* **rational** *(рациональное число, представленное в
виде дроби).*
```
class rational {
private :
    long long nom;
    unsigned long long denom;
};
```
*Добавьте в класс конструкторы так, чтобы:*

* *по умолчанию дробь инициализировалась как* ```0/1```;
* *работала инициализация* ```rational r = 3;```
* *работала инициализация* ```rational r(-2, 3);```
* *работала инициализация* ```rational t = r;```

### Задание 7 **(2)**

*Напишите программу на Python в которой будет определяться
класс* **Point** *с двумя полями* **x** *и* **y**. *Класс должен содержать
конструктор и метод* **__str__** *для создания текстового представления
точки. 

Напишите программу для проверки работы методов.*

```python
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __str__(self):
        return '(' + str(self.x) + ', ' + str(self.y) + ')'   
        
a = Point(10,5)
print(a)
```

<img width="108" height="60" alt="image" src="https://github.com/user-attachments/assets/96868d62-df2b-4480-b063-0edc56891f20" />

### Задание 8 **(2)**

*Напишите программу на Python в которой будет определяться класс*
**Rectangle** *с двумя полями типа* **Point**. *Точки задают левый верхний
и правый нижний угол прямоугольника. Класс должен содержать
конструктор и метод* **__str__** *для создания текстового представления
прямоугольника. 

Напишите программу для проверки работы методов.*

```python
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

```

<img width="212" height="80" alt="image" src="https://github.com/user-attachments/assets/0ba1ec2c-76f1-43da-8e91-fa1f825a8f43" />

### Задание 9 **(2)**

*Добавьте в класс функцию для вычисления площади
прямоугольника. Функцию следует добавить не в момент
определения класса, а в процессе работы программы.*

*Проверьте работоспособность функции.*

```python
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __str__(self):
        return '(' + str(self.x) + ', ' + str(self.y) + ')'   

class Rectangle:
    def __init__(self, a, b):
        self.topleft = a
        self.bottomright = b
    def __str__(self):
        return '|' + str(self.topleft) + '-' + str(self.bottomright) + '|'
        
        
a = Point(10,5)
print(a)
r = Rectangle(Point(0, 10), Point(10, 0))
print(r)
Rectangle.square = lambda self : abs((self.topleft.x-self.bottomright.x) *\
               (self.topleft.x-self.bottomright.x))

print(r.square)
```

<img width="204" height="83" alt="image" src="https://github.com/user-attachments/assets/30eb3ce5-adac-401a-aa07-37f29901a4e2" />

### Задание 10 **(2)**

*Добавьте в программу класс* **Segment** *с двумя полями типа*
**Point**. *Точки задают концы отрезка. Класс должен содержать
конструктор, метод* **__str__** *для создания текстового представления
отрезка и метод* **length** *для нахождения длины отрезка.*

*Напишите программу для проверки работы методов.*

*Измените тип ранее созданного объекта класса* **Rectangle** *на* **Segment**.
*Объект должен создаваться с типом* **Rectangle**, *а после изменить тип
на* **Segment**.

*Проверьте работу методов до и после изменения типа.*


## Дополнительные задания

### Задание 1 **(20)**

*Напишите на языке С++ класс* **matrix** для работы с матрицами квадратного вида. Напишите методы для нахождения 
определителя матрицы, для сложения и умножения матриц, для умножения матрицы на число.

