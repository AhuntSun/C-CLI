// EXP4.2.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
ref class Shape//���û���Shape
{
public:
	virtual  void ShowArea()//����Shape�е������������
	{
		Console::WriteLine(L"Shape���е�ShowArea");
	}
	virtual  void ShowVolume()//����Shape�е������������
	{
		Console::WriteLine(L"Shape���е�ShowVolume");
	}
};

ref class Circle :Shape
{
public:
	virtual  void ShowArea()override//������Circle�����ص��������
	{
		Console::WriteLine(L"Circle���е�ShowArea");
	}
};

ref class Cylinder : Shape
{
public:
	virtual  void ShowVolume()override//������Cylinder�����ص��������
	{
		Console::WriteLine(L"Cylinder���е�ShowVolume");
	}
	virtual  void ShowArea()override//������Cylinder�����ص��������
	{
		Console::WriteLine(L"Cylinder���е�ShowArea");
	}
};

int main(array<System::String ^> ^args)
{
	Shape^ shape1;//�������Ķ�����
	Circle^ cir1 = gcnew Circle();//����������Circle�Ķ�����
	Cylinder^ cy1 = gcnew Cylinder();//����������Cylinder�Ķ�����
	shape1 = cir1;//��Circle������Ķ�������ֵ������Ķ�����
	shape1->ShowArea();//ͨ������Ķ����������������
	shape1->ShowVolume();//ͨ������Ķ����������������
	shape1 = cy1;//��Cylinder������Ķ�������ֵ������Ķ�����
	shape1->ShowArea();
	shape1->ShowVolume();
	return 0;
}