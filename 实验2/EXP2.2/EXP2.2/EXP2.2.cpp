// EXP2.2.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
#include <algorithm>
void inputdata(array<int>^ Heighs, array<String^>^ Names)//int ��string��������Ϊ�β�
{	for (int i = 0; i < Names->Length; i++)//����Names�����Heighs����
	{	Console::Write(L"�������{0}��������", i + 1);
		Names[i] = Console::ReadLine();//��������
		Console::Write(L"�������{0}����ߣ�", i + 1);
		Heighs[i] = int::Parse(Console::ReadLine());//�������
	}}
void outdata(array<int>^ Heighs1, array<String^>^ &Names)//int ��string��������Ϊ�β�
{	Console::WriteLine(L"\n�������������߼�ѧԱ����:");
for (int i = (Names->Length)-1; i>-1; i--)//����foreachѭ����Names������б���
{
	Console::Write("{0}\t", Names[i]);//�����������
	Console::WriteLine("{0}\t", Heighs1[i]);//����������
}
Console::Write("{0}λͬѧ�����λ�ھ���λ��ͬѧ����Ϊ:", (Names->Length));
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
		inputdata(Heighs, Names);  //���ݵ�����
		Array::Sort(Heighs, Names);  // �����鰴��һ�������������� 
		
		//Array::Reverse(Heighs, Names);
		outdata(Heighs, Names);  //�����������
    return 0;}
