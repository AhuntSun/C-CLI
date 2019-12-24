// EXP2.4.cpp: 主项目文件。
#include "stdafx.h"
#include "stdlib.h"
using namespace System;
int main(array<System::String ^> ^args)
{
	String ^words;// 一组用符号分隔num个数值
	array<String^>^split = nullptr;//把数组置零
	array <double>^ data = gcnew array<double>(10);//创建容量为10的数组
	String^ delimStr = " ,:";//输入的数据可以空格，逗号和冒号分隔
	array<Char>^delimiter = delimStr->ToCharArray();//转换为单个字符
	int num, i;
	while (1)//大循环
	{
		Console::WriteLine(L"请输入数据的个数:");
		num = int::Parse(Console::ReadLine());
		if (num == 0)		break;//判断输入数据个数
		Console::WriteLine(L"请输入{0}个数,中间用逗号或空格分隔:", num);
		words = Console::ReadLine();
		split = words->Split(delimiter, num);//拆分为num个子串
		i = 0;
		for each(String ^s in split)//运用for each遍历数组
		{
			Console::WriteLine("[{0}]", s);//输出分隔好的字符串
			data[i++] = Convert::ToDouble(s);
		}
		double sum = 0;
		for (i = 0; i < num; i++)//分割后的数据求和
		{
			Console::WriteLine("{0:F}", data[i]);
			sum += data[i];
		}
		Console::WriteLine("sum={0:F}", sum);//输出结果
	}
	system("pause");
	return 0;
}