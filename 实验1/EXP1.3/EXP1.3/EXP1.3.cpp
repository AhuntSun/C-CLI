// EXP1.3.cpp: ����Ŀ�ļ���

#include "stdafx.h"
using namespace System;
int max(int x, int y, int z = -10000)//����ȽϺ���
{	int m;
	m = x>y ? x : y;   //if���ļ�д��ȡx,y������һ��������m��
	m = m>z ? m : z;  //if���ļ�д��ȡm,z������һ��������m��
	return m;    //�����������е����һ��
}
int main(array<System::String ^> ^args)
{	int m, a, b, c;//�����������ͱ���
	Console::WriteLine(L"��������������");//���ָ����Ϣ
	Console::WriteLine(L"��һ������a");//���ָ����Ϣ
	a = Int32::Parse(Console::ReadLine());//�Ӽ�������һ���ַ�����ת��Ϊ����Ч��32λ�з��������ٸ�a��ֵ
	Console::WriteLine(L"�ڶ�������b");//���ָ����Ϣ
	b = Int32::Parse(Console::ReadLine());//�Ӽ�������һ���ַ�����ת��Ϊ����Ч��32λ�з��������ٸ�b��ֵ
	Console::WriteLine(L"����������c");//���ָ����Ϣ
	c = Int32::Parse(Console::ReadLine());//�Ӽ�������һ���ַ�����ת��Ϊ����Ч��32λ�з��������ٸ�c��ֵ
	m = max(a, b, c);//���ñȽϺ���max�������ȽϽ����ֵ��m
	Console::WriteLine("({1},{2},{3}) �������������Ϊ{0}", m, a, b, c);//���a��b��c�ȽϽ��
	m = max(a, b);//���ñȽϺ���max�������ȽϽ����ֵ��m
	Console::WriteLine("({0},{1}) �������������Ϊ{2}\n", a, b, m);//���a��b�ȽϽ��
	m = max(b, c);//���ñȽϺ���max�������ȽϽ����ֵ��m
	Console::WriteLine("({1},{2}) �������������Ϊ{0}\n", m, b, c);//���b��c�ȽϽ��
	Console::Read();//��ͣ
    return 0;
}
