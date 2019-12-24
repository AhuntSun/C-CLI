// EXP4.1.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
public enum class COLORS{ Green, Red, Blue, Yellow, White };

class circle
{
	double radius;
public:
	circle(double r) :radius(r)//circle类的析构函数
	{
		Console::WriteLine("圆的构造函数，R={0}", radius);
	}
	~circle()//circl类的析构函数
	{
		Console::WriteLine("圆的析构函数，R={0}", radius);
	}
	double area()//circle类中计算面积的成员函数
	{
		return Math::PI*radius*radius;
	}
};

class table
{
	double height;
public:
	table(double h) :height(h)//table类的有参构造函数
	{ 
		Console::WriteLine("桌子的构造函数，H={0}", height);
	}
	~table()//table类的析构函数
	{
		Console::WriteLine("桌子的析构函数，H={0}", height);
	}
	double get_height()//table类中获取高度的成员函数
	{
		return height;
	}
};

class roundtable :public circle,public table//继承了circle和table类公共部分的派生类
{
	COLORS color;
public:
	roundtable(double r, double h, COLORS c) :circle(r), table(h)//roundtable派生类的有参构造函数
	{
		color = c;
		Console::WriteLine(L"圆桌的构造函数，C={0}", safe_cast<int>(color));
	}
		~roundtable()//roundtable派生类的析构函数
	{
		Console::WriteLine(L"圆桌的析构函数，C={0}", safe_cast<int>(color));
	}
	void show();//类外定义
};
void roundtable::show()//在类外实现函数函数名前要加所在类的修饰符
{
	Console::WriteLine("圆桌的高度＝{0}，面积＝{1:F5}，颜色是：{2}",
		get_height(), area(), safe_cast<int>(color));
}

int main(array<System::String^> ^args)
{
	roundtable rtable1(1, 3, COLORS::Red);//定义三个派生类的对象
	roundtable rtable2(2, 5, COLORS::Green);
	roundtable rtable3(3, 6, COLORS::Blue);
	rtable1.show();//三个对象分别调用成员函数show()观察调用情况
	rtable2.show();
	rtable3.show();
	return 0;
}