#include "stdafx.h"
#include "stdlib.h"
using namespace System;
ref class Cube
{
private:
	double Length, Heigt, Width, Volume;// ��,��,������
public:
	Cube() : Length(0), Width(0), Heigt(0)// ��ʽĬ�Ϲ��캯�����޲Σ�
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"Ĭ�Ϲ��캯�������Ϊ��{0}", Volume);//����������
	}
	
	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)//�������ι��캯��
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"�вι��캯�������Ϊ��{0}", Volume);
	}
	
	Cube(double l, double w) : Length(l), Width(w)//�����������Ĺ��캯��
	{	Volume = Length * Width;
		Console::WriteLine(L"2�������Ĺ��캯�������Ϊ��{0}", Volume);
	}
	
	Cube(Cube ^cube)//���ƹ��캯��:����ĵ�һ��������������ĸ��پ��
	{	Length = cube->Length;
		Width = cube->Width;
		Heigt = cube->Heigt;
		Volume = Length * Width* Heigt;;
		Console::WriteLine(L"A3�������ĸ��ƹ��캯�������Ϊ��{0}", Volume);
	}

	Cube(Cube %cube) //���ƹ��캯��:����ĵ�һ������������������ö���
	{ 
		Length = cube.Length;
		Width = cube.Width;
		Heigt = cube.Heigt;
		Volume = Length * Width* Heigt;;
		Console::WriteLine(L"B3�������ĸ��ƹ��캯�������Ϊ��{0}", Volume);
	}

	~Cube()//������������
	{
		Console::WriteLine("�������캯�������Ϊ��{0}", Volume );
	}
	
	!Cube()//�����ս�������
	{
		Console::WriteLine(L"�����սắ�������Ϊ��{0}", Volume);
	}

	literal double p = 0.9;//������ֵ�ֶ��ж������p
	void ShowQua(void)
	{
		Console::WriteLine("��������������Ϊ��{0}", Volume*p);
	}
	
	double Length, Width, Volume;
	initonly double Heigt;//�Ѹ߶���Ϊֻ���ֶ�

	Cube(double l, double w) : Length(l), Width(w)
	{
		Volume = Length * Width;
		Heigt = 2 * Heigt;  //ֻ���ڹ��캯�����޸�ֻ�����
		Console::WriteLine(L"2�������Ĺ��캯�������Ϊ��{0}", Volume);

	}
	void ShowQua(void)
	{
		Heigt = 2 * Heigt; //�����ڹ��캯�����޸�ֻ�����
		Console::WriteLine("��������������Ϊ��{0}", Volume*p);
	}

	void ShowRes(void)//��Ա������ʵ���������������
	{
		Console::WriteLine("�������������Ϊ��{0}", Volume);
	}
};
int main(array<System::String ^> ^args)
{
	Cube^ cube1 = gcnew Cube;// A:�����޲ι��캯��
	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:�����вι��캯��
	Cube  a, b(2, 3, 4);//ֱ�Ӷ���Cube����a��b��a�����޲ι��캯����b�����вι��캯��
	Cube  c(4, 5);//�������������Ķ���
	Cube ^d = gcnew Cube(5, 6);//������������Ĳ������پ��
	Cube ^cube3 = gcnew Cube(cube2);//A:���ø��پ�����ƹ��캯���������
	Cube ^cube4 = gcnew Cube(*cube2);//B:���������ิ�ƹ��캯���������
	Cube cube5(cube2);//A:���ø��پ�����ƹ��캯���������
	Cube ^cube6 = gcnew Cube(b);//B:���������ิ�ƹ��캯���������
	Cube cube7(b);//B:���������ิ�ƹ��캯���������
	delete cube2;//�ͷŶ���cube2�ڴ�ռ䣬֮����ٵ���һ����������
	cube2->ShowRes();
	cube2->ShowQua();//��������ֵ�ֶ��еĺ������ܶ�
	system("pause");
	return 0;
}