// EXP1.1.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, area;                       // 声明变量

	String^ strRadius;                    // 声明一个字符串变量

	Console::Write("输入圆的半径：");     // 显示指引信息

	strRadius = Console::ReadLine();      // 从键入一个字符串并赋值给变量strRadius

	r = Double::Parse(strRadius);       // 将字符串变量strRadius转换成double型，并赋值给double型变量r

	area = Math::PI*r*r;                  // 运用库函数Math中的PI计算面积

	Console::WriteLine("圆的周长为：{0}\n圆的面积为：{1}",

		(2.0 * Math::PI * r).ToString(),

		area.ToString());             // 输出指引信息及圆的周长和面积
    return 0;
}
