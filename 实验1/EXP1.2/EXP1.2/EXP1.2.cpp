// EXP1.2.cpp: 主项目文件。

#include "stdafx.h"
using namespace System;
int main(array<System::String ^> ^args)
{	double r , h = 4.0, dResult; //定义及部分赋值double型变量
	int nID;//定义int型变量
	Console::Write("请输入半径r=");//输出指引信息
	r = double::Parse(Console::ReadLine ());//将输入数字的字符串表示形式转换为它等效双精度浮点数
	while (1){//添加循环结构
		Console::WriteLine("1--计算圆周长");//输出指引信息
		Console::WriteLine("2--计算圆面积");//同上
		Console::WriteLine("3--计算圆球体积");//同上
		Console::WriteLine("4--计算圆柱体积");//同上
		Console::WriteLine("0--退出");//同上
		Console::Write("请选择<0..4>:");//同上
		nID = Int32::Parse(Console::ReadLine());//将输入数字的字符串表示形式转换为它的等效32位有符号整数
		if (nID == 0) break;//当nID==0时跳出while循环
		switch (nID)//此为switch循环，根据输入nID的值进行不同的运算
	{	case 1:  dResult = Math::PI * r * 2.0;//nID==1时计算圆的周长，并将结果赋给dResult
			Console::WriteLine("圆周长为: {0}", dResult.ToString());//输出圆的周长
			break;//跳出循环，下同
		case 2:  dResult = Math::PI * r * r;//nID==2时计算圆的面积，并将结果赋给dResult
			Console::WriteLine("圆面积为: {0}", dResult.ToString());//输出圆的面积
			break;
		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0; //nID == 3时计算圆球的体积，并将结果赋给dResult
			Console::WriteLine("圆球体积为: {0}", dResult.ToString());//输出圆球的体积
			break;
		case 4:  dResult = Math::PI * r * r * h; //nID == 4时计算圆柱的体积，并将结果赋给dResult
			Console::WriteLine("圆柱体积为: {0}", dResult.ToString());//输出圆柱的体积
			break;
		}
	}
    return 0;
}
