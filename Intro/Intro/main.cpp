﻿#include<iostream>
using namespace std;

//Создание структуры:
class Point
{
	//Структура Point описывает точки на плоскости.
	double x;//Координата по X
	double y;//Координата по Y
public:
	double get_x()
	{
		return x;
	}
	double get_y()
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	//			Constructors:
	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "Constructor:\t\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//				Methods:
	void print()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};
//Создавая структуру или класс, мы создаем новый тип данных, 
//а объявляя объекты этого класса или структуры мы создаем переменные нашего типа.

//			КЛАСС - ЭТО ТИП ДАННЫХ
//		СТРУКТУРА - ЭТО ТИП ДАННЫХ
//		ОБЪЕКТ - ЭТО САМАЯ ОБЫЧНАЯ ПЕРЕМЕННАЯ.

//#define INTRO
#define CONSTRUCTORS

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef INTRO
	int a;	//Объявление переменной 'a', типа 'int'
	Point A;//Объявление объекта 'A' структуры 'Point'
			//Объявление переменной 'A' типа 'Point'
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;	//Создаем указатель на объект
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
#endif // INTRO

#ifdef CONSTRUCTORS
	Point A;//Default constructor
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B = 5;
	B.print();
#endif // CONSTRUCTORS

}
/*
-------------------------------------
.  - Оператор прямого доступа (Point operator) используется для доступа к полям объекта по имени объекта
-> - Оператор косвенного доступа (Arrow operator) используется для доступа к полям объекта по адресу объекта
this - это указатель на объект, для которого вызывается метод.
-------------------------------------
*/

/*
-------------------------------------
1. Encapsulation - это сокрытие определенной части класса от внешнего мира;
	Модификаторы доступа:
		private: закрытые поля (члены) класса, доступные только изнутри класса 
				 и недоступны за его пределами.Здесь обязательно должны находиться ПЕРЕМЕННЫЕ ЧЛЕНЫ КЛАССА!!!
		public:	 открытые поля, доступные из любого места программы, где доступен объект.
				 В public-секции обычно размещают методы.
		protected: использется только при наследовании.
	get/set-методы
	get - взять
	set - задать + отфильтровать некорректные значения.
2. Inheritance;
3. Polymorphism;
-------------------------------------
*/

/*
-------------------------------------
Constructor - это метод, который создает объект. 
			  Выделяет память под объект и инициализирует его поля при создании.
Destructor  - это метод, который уничтожает объект по истечении его времени жизни.
~
class Class
{
	Class()
	{
		//Constructor
	}
	~Class()
	{
		//Destructor
	}
};
for(Point A = 0; A < 10; A++)
{
	
}
if(четотам)
{
	Point A;
	...
	./...
}Здесь точки A уже нет, ее время жизни истекло.
-------------------------------------
*/