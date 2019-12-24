/*

#include "stdafx.h"
using namespace System;
#include <iostream>
void fun(int^p){
	*p = 100;
}

void Swap(double^a, double^b)  //交换器的函数(运用跟踪句柄的形式实现)
{
	double  c= *a;
	*a =c+*b;//交换两个数
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

		MessageBox::Show(L"你喜欢Visual C++ .NET吗？",

		L"提问", 				/*标题*/

		buttons,				/*按钮*/

		MessageBoxIcon::Question, 		/*图标*/

		MessageBoxDefaultButton::Button1	/*默认按钮*/))

	{

		// 当按下[是]按钮后执行这里的代码

	}

	return 0;

}