# Языки программирования
## Лабораторная работа 10

### Задание 1 **(2)**

*Рассмотрим следующие фрагменты программ.*
```
int a = 10, b = 20;
int *p = &a , *q = &b;
p = q
std::cout << *p <<' '<< *q << std::endl;
```
```
int a = 10, b = 20;
int *p = &a , *q = &b;
*p = *q
std::cout << *p <<' '<< *q << std::endl;
```
*Чем различаются присваивания в третьей строке? Что можно вывести,
чтобы показать различия?*

*Примеры программ сохраните в папке с номером задания.*
```c++
#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 20;
	int *p = &a , *q = &b;
	p = q;
	std::cout << *p <<' '<< *q << std::endl;
	std::cout << a << ' ' << b << std::endl;
	std::cout << p << ' ' << q << std::endl;
	std::cout << &a << ' ' << &b << std::endl;
}
```

<img width="251" height="100" alt="image" src="https://github.com/user-attachments/assets/2f373c39-8907-4598-a2bc-2d005d121581" />

```c++
#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 20;
	int *p = &a , *q = &b;
	*p = *q;
	std::cout << *p <<' '<< *q << std::endl;
	std::cout << a << ' ' << b << std::endl;
	std::cout << p << ' ' << q << std::endl;
	std::cout << &a << ' ' << &b << std::endl;
}

```

<img width="248" height="101" alt="image" src="https://github.com/user-attachments/assets/4c8c197a-9cdc-47a2-8633-cf77b55a0cc9" />

### Задание 2 **(1)**

*Рассмотрим следующую программу.* 
```
double x[10];
for (int i = 0; i <1 0; i++)
    std::cout << &x[i] << std::endl;
```

<img width="131" height="220" alt="image" src="https://github.com/user-attachments/assets/920e78dd-83bd-4d16-900d-d41cb3118d52" />

*Что она выводит? Измените
вывод так, чтобы адреса выводились в десятичной системе счисления.
Объясните почему числа составляют арифметическую прогрессию с
определенным шагом.*

*Записанную программу сохраните в папке с номером задания.*

```c++
#include <iostream>
using namespace std;
int main()
{
	double x[10];
    for (int i = 0; i < 10; i++){
        std::cout << reinterpret_cast<size_t>(&x[i]) << std::endl;
    }
}
```

<img width="125" height="210" alt="image" src="https://github.com/user-attachments/assets/6bc05958-5a9f-4e6a-bd47-043aa530f19b" />

### Задание 3 **(2)**

*Токен* **«*»** *в языке C++ может использоваться в трех различных
случаях. Аналогично токен* **«&»** *также может использоваться в трех
случаях. Приведите пример одной программы в которой они были бы
использованы во всех случаях.*

*Записанную программу сохраните в папке с номером задания.*

### Задание 4 **(2)**

*Выпишите значения всех переменных, в том числе указателей,
после выполнения каждой инструкции программы. Объясните, что
происходит в результате выполнения каждой инструкции.*
```
unsigned a = 8, b = 3 ,c = 17;
unsigned *p = &a;
unsigned *q = &b;
*p += *q + c;
c = *q;
p = &c;
c += a;
*p += 10;
*q = *p;
q = p ;
*q += 10;
```

### Задание 5 **(1)**

*Что сравнивается в приведенной ниже программе? Как можно
изменить первую строчку программы, чтобы результат тоже
изменился?*
```
int x = 1, y = 2;
int *p = &y, *q = &x;
if (p < q)
    std::cout << "Yes";
else
    std::cout << "No";
```

<img width="80" height="44" alt="image" src="https://github.com/user-attachments/assets/0e83671b-daa4-470b-8e74-c6289ff7e577" />

```c++
#include <iostream>
using namespace std;
int main()
{
	int y = 2, x = 1;
    int *p = &y, *q = &x;
    if (p < q){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }
}

```

<img width="50" height="43" alt="image" src="https://github.com/user-attachments/assets/dfd2e76d-0486-498c-b1b9-ca4e6d5c0049" />

### Задание 6 **(2)**

*Объясните работу следующей программы. Как изменится
результат, если тип* **double** *изменить на некоторый другой, например*
**int** *или* **char**?
```
double x = 0;
double *d = &x;
std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
```
Адрес изменился на 4 * 8 где 8 это адрес double разница между адресами 64
<img width="74" height="62" alt="image" src="https://github.com/user-attachments/assets/ffb9179b-eab8-4f4d-8ab2-3f5a3fda65b6" />

Если изменить на int:

Адрес изменился на 4 * 4 где 4 это адрес int разница между адресами 32

```c++
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
    int *d = &x;
    std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
}

```
<img width="73" height="50" alt="image" src="https://github.com/user-attachments/assets/1f75a81c-aa55-481a-b5a2-d3bc79740bcf" />

Если изменить на char:

Адрес изменился на 4 * 1 где 1 это адрес char разница между адресами 8

```c++
#include <iostream>
using namespace std;
int main()
{
	char x = 0;
    char *d = &x;
    std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
}
```

<img width="56" height="50" alt="image" src="https://github.com/user-attachments/assets/b9383f17-d410-4e52-807c-814bdcea30d1" />

### Задание 7 **(2)**

*Объясните работу следующей программы. Как изменится
результат, если тип* **double** *изменить на некоторый другой, например*
**int** *или* **char**?

Берётся разность адресов и делится на размер типа:

Double:  
```
std::cout << reinterpret_cast <double*>(3000) - reinterpret_cast <double*>(2000) << std::endl;
```

<img width="78" height="47" alt="image" src="https://github.com/user-attachments/assets/913e2b12-eeb9-4ef6-ae10-2ff91a10eab7" />

Int:  
```
std::cout << reinterpret_cast <int*>(3000) - reinterpret_cast <int*>(2000) << std::endl;
```

<img width="77" height="65" alt="image" src="https://github.com/user-attachments/assets/8de8a7b0-8c18-4ec5-94f6-095643184201" />

Char:  
```
std::cout << reinterpret_cast <char*>(3000) - reinterpret_cast <char*>(2000) << std::endl;
```

<img width="73" height="56" alt="image" src="https://github.com/user-attachments/assets/5f6a71ae-93af-42dc-8f9b-71d4ec645126" />

### Задание 8 **(2)**

*Что надо дописать в записанной ниже программе вместо многоточий, чтобы
она выводила все числа из массива* **a**? *Почему?*
```
int a[20];
for ( int i = 0; i < 20; i++)
    a[i] = i;
int *b=a + 8;
for (int i =...; i <...; i++)
    std::cout << b[i] <<' ';
```

### Задание 9 **(2)**

*Что выводит следующая программа? Изменится ли результат если
изменить тип элементов массива?*

```
int a[10];
std::cout << &a[8] - &a[3] << std::endl;
```
<img width="48" height="45" alt="image" src="https://github.com/user-attachments/assets/53daaa5e-c8ce-47ed-8dec-00420ea4b902" />

Разность указателей находится независимо от типов в данном случае будет 5 при любых типах.

### Задание 10 **(1)**

*Есть ли разница между инициализацией* **p** и **q** *в следующей программе? Обоснуйте ответ.*
```
int x [10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = x + 5;
int *q = &x[5];
```

### Задание 11 **(3)**

*Указатели можно использовать для итерации по массивам.
Напишите программу, которая найдет сумму элементов массива,
используя указатели. В начале цикла указатель требуется установить
на начало массива, в конце каждой итерации смещать его к
следующему элементу массива через инкремент. Для выхода из цикла
надо проверять, что указатель дошел до конца массива.*
```
int x [10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int s = 0;
for (int *p = ...; ...; ...)
    s += ...
std::cout << s;
```

*Записанную программу сохраните в папке с номером задания.*


## Дополнительные задания

### Задание 1 **(3)**

*Запишите программу на С++, в которой будет создаваться двумерный массив* **x[10][10]**. *Выведите адреса элементов массива и нарисуйте, как элементы расположены в памяти.*

### Задание 2 **(3)**

*Запишите программу на С++, в которой будет создаваться двумерный массив* **x[10][10]**. *Проверьте, что произойдет при различных выходах за границы массива. Напишите программы для демонстрации и поясните
их работу.* 

### Задание 3 **(6)**
*Напишите пример программы, которая продемонстрирует неопределенное поведение при выходе за границу одномерного массива. Например, чтобы программа зависла, хотя по алгоритму такого не должно произойти

### Задание 4 **(8)**
*Изучите самостоятельно работу с динамической памятью. Напишите примеры программ, демонстрирующие особенности работы (например, перемещение при расширении) и возможные ошибки при работе с памятью.* 

