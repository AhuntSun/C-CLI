// EXP1.2.2.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, h = 4.0, dResult;
	int nID;
	Console::Write("������뾶r=");
	r = double::Parse(Console::ReadLine());
	do {
		Console::WriteLine("1--����Բ�ܳ�");
		Console::WriteLine("2--����Բ���");
		Console::WriteLine("3--����Բ�����");
		Console::WriteLine("4--����Բ�����");
		Console::WriteLine("0--�˳�");
		Console::Write("��ѡ��<0..4>:");
		nID = Int32::Parse(Console::ReadLine());
	
		switch (nID)
		{
		case 1:  dResult = Math::PI * r * 2.0;
			Console::WriteLine("Բ�ܳ�Ϊ: {0}", dResult.ToString());
			break;
		case 2:  dResult = Math::PI * r * r;
			Console::WriteLine("Բ���Ϊ: {0}", dResult.ToString());
			break;
		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0;
			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());
			break;
		case 4:  dResult = Math::PI * r * r * h;
			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());
			break;
		}
	} while (nID != 0);
    return 0;
}
