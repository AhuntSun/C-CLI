// EXP2.2.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
#include <algorithm>
void inputdata(array<int>^ Heighs, array<String^>^ Names)//int 和string型数组作为形参
{	for (int i = 0; i < Names->Length; i++)//遍历Names数组和Heighs数组
	{	Console::Write(L"请输入第{0}个姓名：", i + 1);
		Names[i] = Console::ReadLine();//输入名字
		Console::Write(L"请输入第{0}个身高：", i + 1);
		Heighs[i] = int::Parse(Console::ReadLine());//输入身高
	}}
void outdata(array<int>^ Heighs1, array<String^>^ &Names)//int 和string型数组作为形参
{	Console::WriteLine(L"\n按身高排序后的身高及学员姓名:");
for (int i = (Names->Length)-1; i>-1; i--)//运用foreach循环对Names数组进行遍历
{
	Console::Write("{0}\t", Names[i]);//依次输出名字
	Console::WriteLine("{0}\t", Heighs1[i]);//依次输出身高
}
Console::Write("{0}位同学中身高位于居中位的同学名字为:", (Names->Length));
if ((Names->Length)%2==0)
{
	Console::WriteLine("{0}\t{1}", Names[(Names->Length / 2)-1], Names[(Names->Length) / 2]);
}
else
{
	Console::WriteLine("{0}", Names[(Names->Length-1) / 2]);
}
}
int main(array<System::String ^> ^args)
{	array<String^>^ Names = gcnew array<String^>(9);
	array<int>^ Heighs = gcnew array<int>(9);
		inputdata(Heighs, Names);  //数据的输入
		Array::Sort(Heighs, Names);  // 对数组按第一个参数进行排序 
		
		//Array::Reverse(Heighs, Names);
		outdata(Heighs, Names);  //排序后输出结果
    return 0;}
