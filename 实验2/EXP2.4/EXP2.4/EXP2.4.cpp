// EXP2.4.cpp: ����Ŀ�ļ���
#include "stdafx.h"
#include "stdlib.h"
using namespace System;
int main(array<System::String ^> ^args)
{
	String ^words;// һ���÷��ŷָ�num����ֵ
	array<String^>^split = nullptr;//����������
	array <double>^ data = gcnew array<double>(10);//��������Ϊ10������
	String^ delimStr = " ,:";//��������ݿ��Կո񣬶��ź�ð�ŷָ�
	array<Char>^delimiter = delimStr->ToCharArray();//ת��Ϊ�����ַ�
	int num, i;
	while (1)//��ѭ��
	{
		Console::WriteLine(L"���������ݵĸ���:");
		num = int::Parse(Console::ReadLine());
		if (num == 0)		break;//�ж��������ݸ���
		Console::WriteLine(L"������{0}����,�м��ö��Ż�ո�ָ�:", num);
		words = Console::ReadLine();
		split = words->Split(delimiter, num);//���Ϊnum���Ӵ�
		i = 0;
		for each(String ^s in split)//����for each��������
		{
			Console::WriteLine("[{0}]", s);//����ָ��õ��ַ���
			data[i++] = Convert::ToDouble(s);
		}
		double sum = 0;
		for (i = 0; i < num; i++)//�ָ����������
		{
			Console::WriteLine("{0:F}", data[i]);
			sum += data[i];
		}
		Console::WriteLine("sum={0:F}", sum);//������
	}
	system("pause");
	return 0;
}