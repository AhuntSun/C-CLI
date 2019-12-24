// EXP4.2.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
ref class Shape//引用基类Shape
{
public:
	virtual  void ShowArea()//基类Shape中的虚拟面积函数
	{
		Console::WriteLine(L"Shape类中的ShowArea");
	}
	virtual  void ShowVolume()//基类Shape中的虚拟体积函数
	{
		Console::WriteLine(L"Shape类中的ShowVolume");
	}
};

ref class Circle :Shape
{
public:
	virtual  void ShowArea()override//派生类Circle中重载的面积函数
	{
		Console::WriteLine(L"Circle类中的ShowArea");
	}
};

ref class Cylinder : Shape
{
public:
	virtual  void ShowVolume()override//派生类Cylinder中重载的面积函数
	{
		Console::WriteLine(L"Cylinder类中的ShowVolume");
	}
	virtual  void ShowArea()override//派生类Cylinder中重载的体积函数
	{
		Console::WriteLine(L"Cylinder类中的ShowArea");
	}
};

int main(array<System::String ^> ^args)
{
	Shape^ shape1;//定义基类的对象句柄
	Circle^ cir1 = gcnew Circle();//定义派生类Circle的对象句柄
	Cylinder^ cy1 = gcnew Cylinder();//定义派生类Cylinder的对象句柄
	shape1 = cir1;//把Circle派生类的对象句柄赋值给基类的对象句柄
	shape1->ShowArea();//通过基类的对象句柄调用面积函数
	shape1->ShowVolume();//通过基类的对象句柄调用体积函数
	shape1 = cy1;//把Cylinder派生类的对象句柄赋值给基类的对象句柄
	shape1->ShowArea();
	shape1->ShowVolume();
	return 0;
}