// EXP2.1.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
	
//void alter(double ^a, double ^b) //ʹ�ø��پ���ķ�ʽʵ�ַŴ����ĺ���
//{
//	double ^z = a;      //��������зŴ�
//	*a = *a + *b;
//	*b = *z**b;//�˷������Ĵ�
//}


//void Swap(double&a,double&b)  //�������ĺ���(�������õ���ʽʵ��)
	//{	double c = a;
	//	a= b;//����������
	//	b = c;}

void alter(double^a, double^b)    //�Ŵ����ĺ���(���ø��پ������ʽʵ��)
{
	double c = *a;
	*a = c + *b;//��������зŴ�
	*b = *b * c;
}
int main(array<System::String ^> ^args)
{		
	//double ^x, ^y;//������پ��x,y
//		Console::WriteLine("������x��y��ֵ");
//		x = Double::Parse(Console::ReadLine());//������xָ������ֵ
//		y = Double::Parse(Console::ReadLine());;//������yָ������ֵ
//		while (*x != 0.0&& *y != 0.0)  //*x��ʾ���xָ������ֵ��*yͬ��������ֵͬʱΪ0ʱ���˳�  
//		{	alter(x,y);  //ʹ�÷Ŵ���
//			//Swap(x, y); //ʹ�ý�����
//			Console::WriteLine("�����Ŵ�����x={0}��y={1},",*x,*y); //������Ŵ����ͽ����������ֵ��*x����x���
//			x = Double::Parse(Console::ReadLine());//����x����
//			y = Double::Parse(Console::ReadLine());;//����y����
//		}
		array<int>^ value = { 3, 5, 6, 8, 6 };

		for each(int item in value)      // ��������

			Console::Write(L"{0, 5}, ", item);

		Console::WriteLine();
		return 0;
	}

