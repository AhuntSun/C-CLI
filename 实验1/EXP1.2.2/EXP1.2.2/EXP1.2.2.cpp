// EXP1.2.2.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, h = 4.0, dResult;
	int nID;
	Console::Write("请输入半径r=");
	r = double::Parse(Console::ReadLine());
	do {
		Console::WriteLine("1--计算圆周长");
		Console::WriteLine("2--计算圆面积");
		Console::WriteLine("3--计算圆球体积");
		Console::WriteLine("4--计算圆柱体积");
		Console::WriteLine("0--退出");
		Console::Write("请选择<0..4>:");
		nID = Int32::Parse(Console::ReadLine());
	
		switch (nID)
		{
		case 1:  dResult = Math::PI * r * 2.0;
			Console::WriteLine("圆周长为: {0}", dResult.ToString());
			break;
		case 2:  dResult = Math::PI * r * r;
			Console::WriteLine("圆面积为: {0}", dResult.ToString());
			break;
		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0;
			Console::WriteLine("圆球体积为: {0}", dResult.ToString());
			break;
		case 4:  dResult = Math::PI * r * r * h;
			Console::WriteLine("圆柱体积为: {0}", dResult.ToString());
			break;
		}
	} while (nID != 0);
    return 0;
}
