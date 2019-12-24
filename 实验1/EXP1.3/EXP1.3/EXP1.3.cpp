// EXP1.3.cpp: 主项目文件。

#include "stdafx.h"
using namespace System;
int max(int x, int y, int z = -10000)//定义比较函数
{	int m;
	m = x>y ? x : y;   //if语句的简写，取x,y中最大的一个数放在m中
	m = m>z ? m : z;  //if语句的简写，取m,z中最大的一个数放在m中
	return m;    //返回三个数中的最大一个
}
int main(array<System::String ^> ^args)
{	int m, a, b, c;//定义三个整型变量
	Console::WriteLine(L"请输入三个整数");//输出指引信息
	Console::WriteLine(L"第一个整数a");//输出指引信息
	a = Int32::Parse(Console::ReadLine());//从键盘输入一个字符串并转换为它等效的32位有符号整数再给a赋值
	Console::WriteLine(L"第二个整数b");//输出指引信息
	b = Int32::Parse(Console::ReadLine());//从键盘输入一个字符串并转换为它等效的32位有符号整数再给b赋值
	Console::WriteLine(L"第三个整数c");//输出指引信息
	c = Int32::Parse(Console::ReadLine());//从键盘输入一个字符串并转换为它等效的32位有符号整数再给c赋值
	m = max(a, b, c);//调用比较函数max，并将比较结果赋值给m
	Console::WriteLine("({1},{2},{3}) 三个数中最大数为{0}", m, a, b, c);//输出a，b，c比较结果
	m = max(a, b);//调用比较函数max，并将比较结果赋值给m
	Console::WriteLine("({0},{1}) 二个数中最大数为{2}\n", a, b, m);//输出a，b比较结果
	m = max(b, c);//调用比较函数max，并将比较结果赋值给m
	Console::WriteLine("({1},{2}) 二个数中最大数为{0}\n", m, b, c);//输出b，c比较结果
	Console::Read();//暂停
    return 0;
}
