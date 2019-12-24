// EXP4.1.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
public enum class COLORS{ Green, Red, Blue, Yellow, White };

class circle
{
	double radius;
public:
	circle(double r) :radius(r)//circle�����������
	{
		Console::WriteLine("Բ�Ĺ��캯����R={0}", radius);
	}
	~circle()//circl�����������
	{
		Console::WriteLine("Բ������������R={0}", radius);
	}
	double area()//circle���м�������ĳ�Ա����
	{
		return Math::PI*radius*radius;
	}
};

class table
{
	double height;
public:
	table(double h) :height(h)//table����вι��캯��
	{ 
		Console::WriteLine("���ӵĹ��캯����H={0}", height);
	}
	~table()//table�����������
	{
		Console::WriteLine("���ӵ�����������H={0}", height);
	}
	double get_height()//table���л�ȡ�߶ȵĳ�Ա����
	{
		return height;
	}
};

class roundtable :public circle,public table//�̳���circle��table�๫�����ֵ�������
{
	COLORS color;
public:
	roundtable(double r, double h, COLORS c) :circle(r), table(h)//roundtable��������вι��캯��
	{
		color = c;
		Console::WriteLine(L"Բ���Ĺ��캯����C={0}", safe_cast<int>(color));
	}
		~roundtable()//roundtable���������������
	{
		Console::WriteLine(L"Բ��������������C={0}", safe_cast<int>(color));
	}
	void show();//���ⶨ��
};
void roundtable::show()//������ʵ�ֺ���������ǰҪ������������η�
{
	Console::WriteLine("Բ���ĸ߶ȣ�{0}�������{1:F5}����ɫ�ǣ�{2}",
		get_height(), area(), safe_cast<int>(color));
}

int main(array<System::String^> ^args)
{
	roundtable rtable1(1, 3, COLORS::Red);//��������������Ķ���
	roundtable rtable2(2, 5, COLORS::Green);
	roundtable rtable3(3, 6, COLORS::Blue);
	rtable1.show();//��������ֱ���ó�Ա����show()�۲�������
	rtable2.show();
	rtable3.show();
	return 0;
}