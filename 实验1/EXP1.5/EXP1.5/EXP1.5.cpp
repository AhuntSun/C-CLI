// EXP1.5.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;
double volume(double r)//������һ���β�volume���������Բ��������
{
	return  Math::PI * r * r * r * 4.0 / 3.0;
}
double volume(double r, double h)//�����������βε�volume���������Բ���������
{
	return  Math::PI * r * r * h;
}
int main(array<System::String ^> ^args)
{
	double r, h, dResult;//����double�ͱ���
	Console::WriteLine("������Բ�İ뾶r��");//���ָ�����
	r = Int32::Parse(Console::ReadLine());//��������ַ���ת��Ϊ���ĵ�Ч32λ�з������Ͳ���ֵ������r
	Console::WriteLine("������Բ���ĸ߶�h��");//���ָ�����
	h = Int32::Parse(Console::ReadLine());//��������ַ���ת��Ϊ���ĵ�Ч32λ�з������Ͳ���ֵ������h
	dResult = volume(r);//����ֻ��һ���βε�volume����������ʵ��r����Բ������
	Console::WriteLine("Բ������Ϊ: {0}", dResult.ToString());//���ָ�����
	dResult = volume(r, h);//�����������βε�volume����������ʵ��r��h����Բ�������
	Console::WriteLine("Բ�������Ϊ: {0}", dResult.ToString());//���ָ�����
	Console::Read();//��ͣ
    return 0;
}
