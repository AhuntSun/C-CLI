// EXP1.1.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	double r, area;                       // ��������

	String^ strRadius;                    // ����һ���ַ�������

	Console::Write("����Բ�İ뾶��");     // ��ʾָ����Ϣ

	strRadius = Console::ReadLine();      // �Ӽ���һ���ַ�������ֵ������strRadius

	r = Double::Parse(strRadius);       // ���ַ�������strRadiusת����double�ͣ�����ֵ��double�ͱ���r

	area = Math::PI*r*r;                  // ���ÿ⺯��Math�е�PI�������

	Console::WriteLine("Բ���ܳ�Ϊ��{0}\nԲ�����Ϊ��{1}",

		(2.0 * Math::PI * r).ToString(),

		area.ToString());             // ���ָ����Ϣ��Բ���ܳ������
    return 0;
}
