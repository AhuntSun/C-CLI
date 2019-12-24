// EXP1.5.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;
double volume(double r)//创建有一个形参volume函数计算出圆球的体积。
{
	return  Math::PI * r * r * r * 4.0 / 3.0;
}
double volume(double r, double h)//创建有两个形参的volume函数计算出圆柱的体积。
{
	return  Math::PI * r * r * h;
}
int main(array<System::String ^> ^args)
{
	double r, h, dResult;//定义double型变量
	Console::WriteLine("请输入圆的半径r：");//输出指引语句
	r = Int32::Parse(Console::ReadLine());//将输入的字符串转化为它的等效32位有符号整型并赋值给变量r
	Console::WriteLine("再输入圆柱的高度h：");//输出指引语句
	h = Int32::Parse(Console::ReadLine());//将输入的字符串转化为它的等效32位有符号整型并赋值给变量h
	dResult = volume(r);//调用只有一个形参的volume函数并输入实参r计算圆球的体积
	Console::WriteLine("圆球的体积为: {0}", dResult.ToString());//输出指引语句
	dResult = volume(r, h);//调用有两个形参的volume函数并输入实参r，h计算圆柱的体积
	Console::WriteLine("圆柱的体积为: {0}", dResult.ToString());//输出指引语句
	Console::Read();//暂停
    return 0;
}
