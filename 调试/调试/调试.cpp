/*

#include "stdafx.h"
using namespace System;
#include <iostream>
void fun(int^p){
	*p = 100;
}

void Swap(double^a, double^b)  //�������ĺ���(���ø��پ������ʽʵ��)
{
	double  c= *a;
	*a =c+*b;//����������
	*b = c**b;
}

int main(array<System::String ^> ^args){
	/ *double ^a ;
	double ^b ;
	a = 12.1;
	b = 11.2;
	Swap(a, b);* /
	int ^a=10;
	fun(a);
	Console::WriteLine("a={0} ,", a);
	//Console::WriteLine("a={0} ,\nb={1}", a,b);
	return 0;
}*/

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)

{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;

	if (System::Windows::Forms::DialogResult::Yes ==

		MessageBox::Show(L"��ϲ��Visual C++ .NET��",

		L"����", 				/*����*/

		buttons,				/*��ť*/

		MessageBoxIcon::Question, 		/*ͼ��*/

		MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))

	{

		// ������[��]��ť��ִ������Ĵ���

	}

	return 0;

}