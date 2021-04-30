#pragma warning(disable:4326)
#include"Human.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"

//#define INHERITANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef INHERITANCE_CHECK
	/*Human human("�������", "�������", 18);
human.info();*/
	Student vasya("�������", "�������", 18, "����������������", "BV_011", 4.5);
	vasya.info();

	Teacher teacher("Einstein", "Albert", 150, "Phisics", 120);
	teacher.info();

	Graduate Tony(
		"Montana", "Antonio", 25,
		"����������� ���������� ������", "BV_011", 80,
		"��������������� �������");
	Tony.info();
#endif // INHERITANCE_CHECK
	/*
	//Polymorphism (���������������� - poly - �����, morphis - �����) - ��� ������������ �������� ����� ���� �� �������,
	  � ����������� �� ����, ��� ��� ��������.
	1. Pointer to base class; ��������� �� ������� ����� ����� ������� ����� ��������� �������. (Generalization)
	2. Vitual methods;	(Specialization)
	*/

	//1. Generalization:
	//��� ���������� ������� ����������� �������������� ��������� ������� � ������� ��� - upcast
	Human* group[] =
	{
		new Student("����������", "����", 16, "���", "PD_011", 5),
		new Student("����������", "�����", 32, "���", "PD_011", 5),
		new Graduate("������", "������", 15, "���", "PD_011", 5, "������ ������������ ������"),
		new Teacher("Einstein", "Albert", 141, "Astrophysics", 110),
		new Student("������", "������", 17, "���", "BV_011", 5),
		new Teacher("Richter", "Jeffrey", 45, "Windows development", 20),
		new Graduate("�������", "�������", 33, "���", "BV_011", 5, "���������� �������������� ������������� ���� ������")
	};


	cout << sizeof(group) << endl;
	//2. Specialization:
	cout << delimiter << endl;
	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		//group[i]->info();
		cout << typeid(*group[i]).name() << endl;
		//cout << *group[i] << ", ";
		
		//�������������� �������� ������� � �������� ����� - downcast.
		//downcast ��������� dynamic_cast.
		//dynamic_cast ����������� ��������� �� ������� ����� (Human) � ��������� �� �������� �����
		/*if(typeid(*group[i]) == typeid(Student))cout << *dynamic_cast<Student*>(group[i]);
		if(typeid(*group[i]) == typeid(Teacher))cout << *dynamic_cast<Teacher*>(group[i]);
		if(typeid(*group[i]) == typeid(Graduate))cout << *dynamic_cast<Graduate*>(group[i]);*/

		cout << *group[i] << endl;
		cout << delimiter << endl;
	}

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete group[i];
	}
}

/*int bin_to_dec(char str[])
{
	if (!is_bin_number(str))return 0;
	int decimal = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			decimal *= 2;
			decimal += str[i] - '0';
		}
	}
	return decimal;
}*/